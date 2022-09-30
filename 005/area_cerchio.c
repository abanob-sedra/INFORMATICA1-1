/*
file: area_cerchio.c
autore: Tommaso Sollo
classe: 3°H
data: 30/09/2022
calcolo area cerchio 
Input: raggio
Elaborazione: area e circonferenza cerchio
Output: area e circonferenza cerchio
*/


#include <stdio.h>
#define PI_GRECO 3.14

int main() {
  float raggio;	//input
  float area, circonferenza;	//output
  
  printf("Inserisci il valore del raggio: ");	//lettura raggio
  scanf("%f", &raggio);
  
  area = raggio*raggio*PI_GRECO;	//calcolo area
  circonferenza = 2*raggio*PI_GRECO;  //calcolo circonferenza
  
  printf("L'area del cerchio = %.2f\ncirconferenza del cerchio = %.2f", area, circonferenza);	//scrittura risultato
  
}
