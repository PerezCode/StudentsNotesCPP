#include "Nodo.h"
#include <iostream>
using namespace std;

Nodo::Nodo()
{
	Nombre = "";
	Cedula = 0;
	Correo = "";
	Liga = NULL;
	Notas = new Pila();
}

void Nodo::setNombre(string name) {
	Nombre = name;
}

string Nodo::getNombre() {
	return Nombre;
}

void Nodo::setCedula(long cc) {
	Cedula = cc;
}

long Nodo::getCedula() {
	return Cedula;
}

void Nodo::setCorreo(string email) {
	Correo = email;
}

string Nodo::getCorreo() {
	return Correo;
}

void Nodo::setLiga(Nodo* l) {
	Liga = l;
}

Nodo* Nodo::getLiga() {
	return Liga;
}

void Nodo::inputNote(int n) {
	Notas->Apilar(n);
}

Pila* Nodo::getAddressNotes() {
	return Notas;
}