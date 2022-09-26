
/*
file: areaTriangoloValoriNoti.c
autore: Tommaso Sollo
classe: 3°H
data: 26/09/2022

calcolo area di un triangolo di base 5 e altezza 7

Input: base, altezza
Elaborazione: Calcolo area triangolo
Output: area
*/


#include <stdio.h>

int main() 
{
  float base, altezza;  //input
  float area; //output
  
  base = 5;   //assegnazione valori di base e altezza
  altezza = 7;
  
  area = base * altezza / 2;  //calcolo area
  
  printf("area triangolo = %f", area);  //stampa a schermo risultato
}
