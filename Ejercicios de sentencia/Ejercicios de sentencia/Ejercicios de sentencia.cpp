// Ejercicios de sentencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{

	cout << "***** uso del if *****" << endl;

	int numeroIF;

	cout << "Ingrese numero (numeroIF): ";
	cin >> numeroIF;

	if (numeroIF > 0) {
		cout << "Numero (numeroIF) es positivo.";
		cout << endl;
	}
	else if (numeroIF == 0) {
		cout << "El numero de (numeroIF) es 0";
		cout << endl;
	}
	else {
		cout << "Numero (numeroIF) es negativo.";
		cout << endl;
	}


	cout << endl;

	cout << "***** uso del while *****" << endl;

	int numeroWhile=0;

	while (numeroWhile < 3) {
		cout << numeroWhile << " ";
		numeroWhile = numeroWhile + 1;
	}

	cout << endl;

	cout << "***** uso del do while *****" << endl;

	int numeroDoWhile = 0;
	do {
		cout << numeroDoWhile << " ";
		numeroDoWhile = numeroDoWhile + 1;
	} while (numeroDoWhile==0);

	cout << endl;

	cout << "***** uso del switch *****" << endl;

	string estacion="verano";//estacion actual en méxico agosto 2022


	switch (string(estacion)) {
	case "primavera":
		cout << "Es primavera."; break;
	case "verano":
		cout << "Es verano."; break;
	case "otoño":
		cout << "Es otoño."; break;
	case "inverino":
		cout << "Es invierno."; break;
	default:
		cout << "No esta en ninguna estacion del año";
	}


	return 0;
}

