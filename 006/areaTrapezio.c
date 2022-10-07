
/** ****************************************************************************************
* \mainpage areaTrapezio.c
*
* @brief  Scrivi un programma che calcola l’area e il perimetro di un trapezio dopo aver letto i dati necessari
* Il progetto accetta solo numeri positivi e interi
* 
* @author Tommaso Sollo
* @date 07/10/2022
*/

#include <stdio.h>

int main() {
  int baseM, basem, altezza;
  float area;
  
  printf("Inserisci il valore della base maggiore: ");
  scanf("%d", &baseM);
  
  printf("Inserisci il valore della base minore: ");
  scanf("%d", &basem);


  printf("Inserisci il valore dell'altezza: ");
  scanf("%d", &altezza);
  
  area=(baseM+basem)*altezza/2.0;
  
  printf("Area = %.2f", area);
 }

