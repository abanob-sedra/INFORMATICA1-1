/** ****************************************************************************************
* \mainpage interoMinore
*
* @brief Scrivere un programma che, richiesti in ingresso due valori interi distinti, ne stampi a schermo il minore.
* 
* @author Tommaso Sollo
* @date 07/10/2022
*/
#include <stdio.h>

int main() {
int a,b;  //input

printf("inserisci due interi: "); //richiesta input
scanf("%d%d", &a, &b);

if (a<b)  
  printf("%d e' minore", a);  
else 
  printf("%d e' minore", b);
}
