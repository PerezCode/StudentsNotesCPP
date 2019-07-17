#pragma once
class Pila{
private:
	int limite;
	int tope;
	int dato;
	float vector[5];
public:
	Pila();
	bool pilaVacia();
	bool pilaLlena();
	void Apilar(float);
	float Desapilar();
	void mostrarNotas();
};

