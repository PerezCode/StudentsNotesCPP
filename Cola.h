#pragma once
#include "Nodo.h"
class Cola {
private:
	int tam;
	int tope;
	Nodo* punta;
	Nodo* ultimo;

public:
	Cola(int);
	Nodo* getPunta();
	void setLimite(int limite);
	int getLimite();
	void setTope(int tope);
	int getTope();
	bool colaLlena();
	bool colaVacia();
	void Encolar(Nodo*);
	Nodo* Desencolar();
	void llenarCola(Cola*);
	void Buscar(long);
	void Eliminar(long);
	void mostrar();
	Nodo* getUltimo();
	void setUltimo();
};



