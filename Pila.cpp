#include "Pila.h"
#include <iostream>
using namespace std;

Pila::Pila() {
	limite = 5;
	tope = -1;
	dato = 0;
	vector[5];
}

bool Pila::pilaLlena() {
	if (tope == limite-1) {
		return true;
	}else {
		return false;
	}
}

bool Pila::pilaVacia() {
	if (tope == -1) {
		return true;
	}
	else {
		return false;
	}
}

void Pila::Apilar(float dato) {
	tope++;
	vector[tope] = dato;
}

float Pila::Desapilar() {
	float R = vector[tope];
	tope--;
	return R;
}

void Pila::mostrarNotas() {
	Pila* aux = new Pila();
	float nota = 0;
	float promedio = 0;
	while (pilaVacia() == false) {
		nota = Desapilar();
		promedio += nota;
		cout << "[" << nota << "] ";
		aux->Apilar(nota);
	}

	promedio /= 5;
	cout << "\nEl promedio es: "<<promedio;

	if (promedio >= 3) {
		cout << "\nEl estudiante gano la materia.";
	}
	else {
		cout << "\nEl estudiante perdio la materia.";
	}

	while (aux->pilaVacia() == false) {
		Apilar(aux->Desapilar());
	}
}