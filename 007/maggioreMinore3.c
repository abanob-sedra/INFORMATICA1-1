/** ****************************************************************************************
* \mainpage maggioreMinore3.c
*
* @brief  Scrivere un programma che, richiesti in ingresso tre valori interi distinti, ne determini il minore e il maggiore. 
* 
* @author Tommaso Sollo
* @date 07/10/2022
*/

#include <stdio.h>

int main() {
  int a,b,c;
  int max, min;
  
  printf("inserisci tre interi: ");
  scanf("%d%d%d", a,b,c);
  
  if (a>b) {
    if (a>c){
      max = a;
      } else {
        max = c;
      }
    if (b<c) {
      min = b;
    } els
}
