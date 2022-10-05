
/*
file: restoDivisione.c
autore: Tommaso Sollo
classe: 3°H
data: 05/10/2022
Restituisci il resto della divisione tra due interi 
Input: n1, n2
Elaborazione: calcolo resto
Output: resto
*/

#include <stdio.h>

int main() {
  int n1, n2; //input
  int resto;  //output
  
  printf("Inserisci il primo numero: ");  //lettura primo numero
  scanf("%d", &n1);
  
  printf("Inserisci il secondo numero: ");  //lettura secondo numero
  scanf("%d", &n2);
  
  resto = n1 % n2;  //calcolo resto divisione
  
  printf("Resto: %d", resto); //scrittura risultato
}
