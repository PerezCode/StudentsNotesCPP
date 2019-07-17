#include "Cola.h"
#include "Nodo.h"
#include <string.h>
#include<iostream>

using namespace std;

Cola::Cola(int size) {
	tope = 0;
	tam = size;
	punta = NULL;
	ultimo = NULL;
}

void Cola::setLimite(int limite) {
	this->tam = limite;
}

int Cola::getLimite() {
	return tam;
}

void Cola::setTope(int tope) {
	this->tope = tope;
}

int Cola::getTope() {
	return tope;
}

bool Cola::colaLlena() {
	if (tope == tam) {
		return true;
	}
	else {
		return false;
	}
}

bool Cola::colaVacia() {
	if ((tope == 0) and (punta == NULL)) {
		return true;

	}
	else {
		return false;
	}
}

void Cola::Encolar(Nodo* node) {
	if (punta == NULL) {
		punta = node;
		ultimo = node;
	}
	else {
		ultimo->setLiga(node);
		ultimo = node;
	}
	tope++;
}

Nodo* Cola::Desencolar() {
	Nodo* p = punta;
	if (colaVacia() == false) {
		punta = punta->getLiga();
		tope--;
		p->setLiga(NULL);
	}
	else {
		cout << "La Cola esta vacia, no se puede desencolar.";
	}
	//setUltimo();
	return p;
}

void Cola::llenarCola(Cola* x) {

	int spaceX = tam - tope;
	if (x->getTope() <= spaceX) {
		while (x->colaVacia() == false) {
			Encolar(x->Desencolar());
		}
		//cout << "\nListo!\n";
		//system("PAUSE");
		//system("CLS");
	}
	else {
		cout << "No hay espacio para tantos nodos.";
	}
}

Nodo* Cola::getPunta() {
	return punta;
}

void Cola::Buscar(long n) {
	Nodo* x;
	int cant = 0;

	if (colaVacia()) {
		cout << "La Cola está vacia";
	}
	else {
		x = punta;
		while (x != NULL) {
			if (n == x->getCedula()) {
				cant++;
			}
			x = x->getLiga();
		}
		if (cant == 1) {
			cout << "el estudiante se encontro una vez";
		}
		else if (cant > 1) {
			cout << "El estudiante se encontro " << cant << " veces";
		}
		else {
			cout << "El Estudiante no se encontro";
		}
	}
}

void Cola::Eliminar(long n) {
	Cola* aux = new Cola(tam);
	Nodo* x = NULL;
	int cont = 0;
	while (colaVacia() == false) {
		x = Desencolar();
		if (x->getCedula() == n) {
			delete x;
			cout << "El estudiante fue eliminado de la lista.";
			cont++;
		}
		else {
			aux->Encolar(x);
		}
	}
	if (cont == 0) {
		cout << "El estudiante con la cedula ingresada no se encuentra.";
	}

	llenarCola(aux);
}

void Cola::mostrar() {
	if (colaVacia() == false) {
		Nodo* p = punta;
		while (p != NULL) {
			cout << "Nombre: " << p->getNombre()<<endl;
			cout << "Cedula: " << p->getCedula() << endl;
			cout << "Correo: " << p->getCorreo() << endl;
			cout << "Notas: "; p->getAddressNotes()->mostrarNotas();
			cout << endl;
			cout << "---------------------------------------------";
			cout << endl;
			p = p->getLiga();
		}
		system("PAUSE");
		system("CLS");
	}
	else {
		cout << "La Cola esta vacia\n";
		system("PAUSE");
		system("CLS");
	}
}

Nodo* Cola::getUltimo() {
	return ultimo;
}

void Cola::setUltimo() {
	Nodo* p = punta;
	while (p->getLiga() != NULL) {
		p = p->getLiga();
	}
	ultimo = p;
}