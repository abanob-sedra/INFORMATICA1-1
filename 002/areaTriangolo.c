
/*
file: areaTriangolo.c
autore: Tommaso Sollo
classe: 3°H
data: 26/09/2022

calcolo area di un triangolo

Input: base, altezza
Elaborazione: Calcolo area triangolo
Output: area
*/


#include <stdio.h>

int main() 
{
  float base, altezza;  //input
  float area; //output
  
  printf("Inserisci il valore della base: ");   //leggo valore base
  scanf("%f", &base);
  
  printf("Inserisci il valore dell'altezza: ");   //leggo valore altezza
  scanf("%f", &altezza);
  
  area = base * altezza / 2;  //calcolo area
  
  printf("area triangolo = %f", area);  //stampa a schermo risultato
}
