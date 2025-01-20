#include <iostream>
#include <conio.h>
#include "Recursos.h"
#include "GestorBecado.h"

using namespace std;
//hi
int main()
{
	int opt;
	string codigo, dni;
	double sueldo;
	GestorBecado Gestor;

	int borrar, modificar;

	string nuevocodigo, nuevodni;
	double nuevosueldo;

	do {
		system("cls");
		cout << "MENU" << endl;
		cout << "1. Agregar becado" << endl;
		cout << "2. Mostrar becado" << endl;
		cout << "3. Eliminar becado" << endl;
		cout << "4. Modificar becado" << endl;
		cout << "5. Salir" << endl << endl;

		cout << "Elegir una opcion: ";
		cin >> opt;


		switch (opt) {
		case 1:
			system("cls");
			cout << "Ingresar su codigo universitario: ";
			cin >> codigo;
			cout << "Ingresar su DNI: ";
			cin >> dni;
			cout << "Ingresar su sueldo: ";
			cin >> sueldo;
			Gestor.agregarBecado(codigo, dni, sueldo);

			cout << endl;
			system("pause");
			break;

		case 2:
			system("cls");
			cout << "Los becados tienen los siguientes atributos:" << endl;
			Gestor.mostrarBecado();
			
			cout << endl;
			system("pause");
			break;

		case 3:
			system("cls");
			Gestor.mostrarBecado();

			cout << "Cual becado desea eliminar del registro?: ";
			cin >> borrar;
			Gestor.eliminarBecado(borrar);

			system("cls");
			Gestor.mostrarBecado();
			cout << "El becado fue borrado con EXITO" << endl;

			cout << endl;
			system("pause");
			break;

		case 4:
			system("cls");
			system("cls");
			Gestor.mostrarBecado();

			cout << "Cual becado desea modificar?: ";
			cin >> modificar ;

			cout << endl;
			cout << "Ingresar los datos del becado que desea modificar: " << endl;
			cout << "Codigo universitario: ";
			cin >> nuevocodigo;
			cout << "DNI: ";
			cin >> nuevodni;
			cout << "Sueldo: ";
			cin >> nuevosueldo;
			Gestor.modificarBecado(modificar, nuevocodigo, nuevodni, nuevosueldo);

			system("cls");
			Gestor.mostrarBecado();
			cout << "El becado fue modificado con EXITO" << endl;

			cout << endl;
			system("pause");
			break;
		}
	
	} while ((opt != 5));

	system("pause");
	return 0;
}