#include <iostream>
#include <fstream>
using namespace std;
const int NRIGHE = 30;

/*******
Completare le informazioni
Nome:
Progetto: OrarioTreni
*******/

struct tratta{
	/* Definire la struttura di ogni singola tratta */
};
int carica(tratta []);
void stampa(tratta [], int);

int main(){
	tratta orario[NRIGHE];
	int ntratte = carica(orario);
	stampa(orario,ntratte);
	return 0;
}
int carica(tratta o[]){
/*
La funzione deve leggere da tastiera le informazioni relative
a tutte le tratte restituendo il numero di tratte lette (max NRIGHE)
*/

}
void stampa(tratta o[], int n){
	for (int i=0; i<n; i++)
	{

	}
}
