#include <iostream>
#include "vettore.h"
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
	srand(time(0));
	int dimensione = 0;//variaibile che conterrà la dimensione inserita dall'utente;
	int size = 0;//variabile che conterrà il return del metodo size();
	int somma = 0; //variabile che conterrà il totale della somma degli elementi del vettore;
	int elemento = 0;//variabile che conterrà un singolo elemento raggiunto tramite metodo getter;
	cout << "Inserisci una dimensione per il vettore: " << endl << endl;
	cin >> dimensione;
	
	//istanzio due oggetti di classe Vettore:
	Vettore vect(dimensione);
	Vettore vect2(dimensione);
	//li carico:
	cout << "Carico i vettori..." << endl << endl;
	vect.carica();
	vect2.carica();
	//visualizzo il contenuto dei vettori:
	cout << "Visualizzo il contenuto del primo vettore:" << endl;
	vect.visualizza();
	cout << "Visualizzo il contenuto del secondo vettore: " << endl;
	vect2.visualizza();
	//testo il metodo size():
	size = vect.size();
	cout << "Il primo vettore contiene " << size << " elementi." << endl << endl;
	//ora provo a sommare gli elementi di ciasciun array tra loro:
	cout << "La somma degli elementi del primo array è: ";
	somma = vect.sommaElementi();
	cout << somma << endl << endl;
	cout << "La somma degli elementi del secondo array è: ";
	somma = vect2.sommaElementi();
	cout << somma << endl << endl;
	
	//infine, provo a raggiungere i singoli elementi, tramite setter e getter:
	
	//modifico un elemento del primo vettore e poi lo ristampo, per verificare che il setter funzioni:
	vect.setElemento(0, 9);
	cout << "Ristampo il primo array, e il primo valore dovrebbe essere 9: " << endl;
	vect.visualizza();

	//raggiungo e stampo il un singolo elemento del vect2, tramite metodo getter:
	elemento = vect2.getElemento(3);
	cout << "L'elemento in posizione 3 (partendo da 0) del secondo array è: " << elemento << endl;











	return 0;
}