/** ****************************************************************************************
* \mainpage scontoSpesa.c
*
* @brief Un negoziante per ogni spesa di importo superiore a 50 € effettua uno sconto del 5%,
*        del 10% per ogni spesa superiore a 100 €. Scrivere un programma che richieda all'utente
*        l'ammontare della spesa e visualizzi quindi l'importo effettivo da pagare. 
* 
* @author Tommaso Sollo
* @date 07/10/2022
*/

#include <stdio.h>

int main() {
  float importoIn;
  float importoOut;
  
  printf("Inserisci ammontare della spesa: ");
  scanf("%f", &importoIn);
  
  if (importoIn>50){
    if(importoIn>100) {
      importoOut = importoIn/100*90;
    } else {
       importoOut = importoIn/100*95;
      }
    printf("L'importo scontato e' %.2f", importoOut);
}
 else {
  printf("L'importo e' troppo piccolo per applicare lo sconto");
  }
}

