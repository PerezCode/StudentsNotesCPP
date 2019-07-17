#include <string>
#include "Pila.h"
using namespace std;

class Nodo {

private:
	string Nombre;
	long Cedula;
	string Correo;
	Nodo* Liga;
	Pila* Notas;
public:
	Nodo();
	void setNombre(string);
	string getNombre();
	void setCedula(long);
	long getCedula();
	void setCorreo(string);
	string getCorreo();
	void setLiga(Nodo*);
	Nodo* getLiga();
	void inputNote(int);
	Pila* getAddressNotes();
};