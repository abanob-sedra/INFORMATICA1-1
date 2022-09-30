/*
file: area_cerchio.c
autore: Tommaso Sollo
classe: 3°H
data: 30/09/2022
calcolo area cerchio 
Input: raggio
Elaborazione: area cerchio
Output: area cerchio
*/


#include <stdio.h>
#define PI_GRECO 3.14

int main() {
  float raggio;	//input
  float area;	//output
  
  printf("Inserisci il valore del raggio: ");	//lettura raggio
  scanf("%f", &raggio);
  
  area = raggio*raggio*PI_GRECO;	//calcolo area
  
  printf("L'area del cerchio = %.2f", area);	//scrittura risultato
  
}
