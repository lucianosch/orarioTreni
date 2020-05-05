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
int carica(char [], tratta []);
void stampa(tratta [], int);

int main(){
	tratta orario[NRIGHE];
	char nomeFile[] = "orario.txt";
	int ntratte = carica(nomeFile,orario);
	stampa(orario,ntratte);
	return 0;
}
int carica(char nome[], tratta o[]){
	int n;
	fstream fin(nome,ios::in);
	if (!fin.is_open())
		cerr<<"Errore in apertura file!";
	fin>>n;
	if (n>NRIGHE)
		n = NRIGHE;
	for (int i = 0; i<n; i++)
	{
		fin>>o[i].destinazione>>o[i].partenza>>o[i].arrivo;
	}
	fin.close();
	return n;
}
void stampa(tratta o[], int n){
	for (int i=0; i<n; i++)
	{
	//Completare con le istruzioni mancanti
	}
}
