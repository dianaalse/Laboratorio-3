/*
 * Main.cpp
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */


#include "stdafx.h"



using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	srand(time(NULL));

	ArbolBinario a;
	for (int i = 0; i < 10; ++i) {
		a.insertarElemento(new ElementoInt(rand() % 100));
	}

	cout << "El primer arbol" << endl << a << endl;

	ArbolBinario b;

	for (int i = 0; i < 10; ++i) {
		b.insertarElemento(new ElementoDou((rand() % 100) / 5.222));
	}

	cout << "El segundo arbol" << endl << b << endl;

	ArbolBinario c;
	int cant = 5;
	int id = 0;
	string arrayNom[4] = { "Andres", "Marco", "Luis", "Miguel" };
	Persona** pe;
	pe = new Persona*[cant];
	for (int i = 0; i < cant; ++i) {
		int RandIndex = rand() % 4;
		pe[i] = new Persona(id++, arrayNom[RandIndex]);
		c.insertarElemento(new ElementoPersona(pe[i]));
	}



	cout << "El tercer arbol" << endl << c << endl;
	system("pause");
	return 0;
}

