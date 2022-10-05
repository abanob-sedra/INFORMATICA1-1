
/*
file: secondi.c
autore: Tommaso Sollo
classe: 3°H
data: 05/10/2022
Leggi in input un numero di secondi e trasformali in ora, minuti e secondi 
Input: secondi
Elaborazione: calcolo ore, minuti e secondi
Output: ore, minuti e secondi
*/

#include <stdio.h>

int main() {
  int secondi;  //input
  int ore, minuti;  //output
  
  printf("Inserisci il numero di secondi: ");   //richiesta input
  scanf("%d", &secondi);  //lettura input
  
  minuti = (secondi - secondi % 60) / 60; //calcolo minuti totali
  ore = (minuti - minuti % 60) / 60;  //calcolo ore
  secondi = secondi % 60;   //calcolo minuti effettivi
  minuti = minuti % 60;     //calcolo secondi effettivi
  
  printf("Ore: %d, Minuti: %d, Secondi: %d", ore, minuti, secondi); //stampa risultato
}
