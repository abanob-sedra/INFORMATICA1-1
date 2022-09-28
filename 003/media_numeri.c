
/*
file: media_numeri.c
autore: Tommaso Sollo
classe: 3°H
data: 28/09/2022
calcolo media di tre numeri
Input: num1, num2, num3
Elaborazione: Media
Output: media
*/


#include <stdio.h>

int main() 
{
  float num1, num2, num3;  //input
  float media; //output
  
  printf("Inserisci il primo numero: ");   //leggo valore num1
  scanf("%f", &num1);
  
  printf("Inserisci il secondo numero: ");   //leggo valore num2
  scanf("%f", &num2);
  
  printf("Inserisci il terzo numero: ");   //leggo valore num3
  scanf("%f", &num3);
  
  
  media = (num1 + num2 + num3)/3;  //calcolo media
  
  printf("media = %.2f", media);  //stampa a schermo risultato
}
