#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Vettore {
//parte privata della classe;
private:
	int* v;
	int dim;//variabile nella quale conserverò la dimensione del vettore;
public:
//metodo costruttore, crea un vettore dinamico e prende come parametro la dimensione del vettore;	
	Vettore(int dimensione);
//metodi per effettuare le operazioni basilari con il vettore;	
	void carica();
	void visualizza();
	int size();//restituisce la dimensione del vettore;
	int sommaElementi();
//setter:
	void setElemento(int posizione, int valore);
//getter:
	int getElemento(int posizione);




};

