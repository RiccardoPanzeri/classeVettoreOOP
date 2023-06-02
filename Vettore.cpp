#include "Vettore.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

Vettore::Vettore(int dimensione) {
	v = new  int[dimensione];//vettore dinamico;
	dim = dimensione;//conservo la dimensione, in modo da poterla utilizzare al di fuori del metodo costruttore;
}

void Vettore::carica() {
	for (int i = 0; i < dim; i++) {
		v[i] = (rand() % 9) + 1;
	}
}

void Vettore::visualizza() {
	for (int i = 0; i < dim; i++) {
		cout << v[i] << endl;
	}
	cout << endl << endl;
}

int Vettore::size() {
	return dim;

}


int Vettore::sommaElementi() {
	int tot = 0;
	for (int i = 0; i < dim; i++) {
		tot += v[i];
	}

	return tot;
}


//setter:
void Vettore::setElemento(int posizione, int valore) {
	v[posizione] = valore;
}

//getter:
int Vettore::getElemento(int posizione) {
	return v[posizione];
}
