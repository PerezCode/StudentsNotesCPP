#include <iostream>
#include "Nodo.h"
#include "Cola.h"
#include "Pila.h"

using namespace std;

int  menu() {
	int option;
	do {
		cout << "\t\t || MENU ||\n";
		cout << "1. Agregar Estudiante\n";
		cout << "2. Desencolar Estudiante\n";
		cout << "3. Buscar Estudiante\n";
		cout << "4. Eliminar Estudiante\n";
		cout << "5. Mostrar Estudiantes\n";
		cout << "6. Salir\n\n";
		cout << "Opcion: ";
		cin >> option;

		if ((option < 1) || (option > 6)) {
			system("cls");

			cout << "Opcion invalida!!!! " << endl;

			system("pause");
			system("cls");
		}

	} while ((option < 1) || (option > 6));

	return option;
}

int main() {
	system("COLOR 0b");
	Nodo* nuevoNodo;
	int size = 0;
	cout << "Ingrese el tamano de la Cola: ";
	cin >> size;
	Cola* mainCola = new Cola(size);
	system("CLS");
	int option;
	string Nombre;
	long Cedula = 0;
	string Correo;
	float Nota;
	int indice = 1;

	do {
		option = menu();
		system("CLS");

		switch (option) {
		case 1:
			if (mainCola->colaLlena() == false) {
				cout << " \t\tAgregar Estudiante\n\n";
				nuevoNodo = new Nodo();
				cout << " Ingrese el nombre del estudiante: ";
				cin >> Nombre;
				nuevoNodo->setNombre(Nombre);
				cout << " Ingrese la cedula: ";
				cin >> Cedula;
				nuevoNodo->setCedula(Cedula);
				cout << " Ingrese el correo: ";
				cin >> Correo;
				nuevoNodo->setCorreo(Correo);
				indice = 1;
				while (indice < 6) {
					cout << " Ingrese la nota "<<indice<<": ";
					cin >> Nota;
					nuevoNodo->getAddressNotes()->Apilar(Nota);
					indice++;
				}

				mainCola->Encolar(nuevoNodo);
				cout << " Estudiante almacenado correctamente\n" << endl;
				system("PAUSE");
				system("CLS");
			}
			else {
				cout << "La Cola esta llena, no se puede ingresar mas datos.\n";
				system("PAUSE");
				system("CLS");
			}
		break;

		case 2:
			cout << " \t\tDesencolar Estudiante\n\n";
			mainCola->Desencolar();
			system("CLS");
		break;

		case 3:
			cout << "\t\tBuscar Estudiante\n\n";
			cout << "Ingrese la cedula del estudiante que desea buscar: ";
			cin >> Cedula;
			mainCola->Buscar(Cedula);
			cout << endl;
			system("PAUSE");
			system("CLS");
		break;

		case 4:
			cout << "\t\tEliminar Estudiante\n\n";
			if (mainCola->colaVacia() == false) {
				cout << " Digite la cedula del estudiante que desea eliminar: ";
				cin >> Cedula;
				mainCola->Eliminar(Cedula);
				cout << endl;
				system("PAUSE");
				system("CLS");
			}
			else {
				cout << "La Cola esta vacia.";
				cout << endl;
				system("PAUSE");
				system("CLS");
			}
		break;

		case 5:
			cout << " \t\tLista de Estudiantes\n\t\t\n ";
			mainCola->mostrar();
		break;

		case 6:
			system("COLOR 0A");
			cout << " \t\tSaliendo de la aplicacion\n\t\t    THANKS FOR ALL!! :)\n ";
		break;

		default:
			//Nunca se ejecutará
		break;

			cout << "\n";
			system("PAUSE");
			system("CLS");
		}
	} while (option != 6);

	cout << " ___________                                   .__   "; cout << "          .___           .__    .___" << endl;
	cout << " \\_   _____/ _____ _____    ____  __ __   ____ |  | "; cout << "         __| _/____ ___  _|__| __| _/" << endl;
	cout << "  |    __)_ /     \\\\__  \\  /    \\|  |  \\_/ __ \\|  |"; cout << "         / __ |\\__  \\\\  \\/ /  |/ __ | " << endl;
	cout << "  |        \\  Y Y  \\/ __ \\|   |  \\  |  /\\  ___/|  |__"; cout << "      / /_/ | / __ \\\\   /|  / /_/ | " << endl;
	cout << " /_______  /__|_|  (____  /___|  /____/  \\___  >____/"; cout << "      \\____ |(____  /\\_/ |__\\____ | " << endl;
	cout << "         \\/      \\/     \\/     \\/            \\/      "; cout << "           \\/     \\/             \\/ " << endl;

	system("PAUSE");
	system("CLS");
	system("color 0c");
	cout << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t	      ..ed$$$$$$$ee." << endl;
	cout << "\t\t\t\t\t	   %&&z$$*.$$*$$F**$$e." << endl;
	cout << "\t\t\t\t\t        d$$      .$$´´^$$c    ^*$$." << endl;
	cout << "\t\t\t\t\t      z$$       4$$    ^$$c     *$b." << endl;
	cout << "\t\t\t\t\t     d$P       z$$      ^$$L     ^$$." << endl;
	cout << "\t\t\t\t\t   J$P       z$$         ^$$b     ^$$" << endl;
	cout << "\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$F" << endl;
	cout << "\t\t\t\t\t   4$$     J$$              $$b    4$$" << endl;
	cout << "\t\t\t\t\t   ^$$    d$$                *$$   4$$" << endl;
	cout << "\t\t\t\t\t    $$L  d$$                  *$$  $$%" << endl;
	cout << "\t\t\t\t\t    ^$$cd$$                    *$$d$P" << endl;
	cout << "\t\t\t\t\t     ^$$$$                     *$$P" << endl;
	cout << "\t\t\t\t\t	*$$c                    .d$$" << endl;
	cout << "\t\t\t\t\t         ^*$$bc.             .e$$P" << endl;
	cout << "\t\t\t\t\t             ^*$$$$$$eee$$$$$* " << endl;


	system("PAUSE");
	return 0;
}