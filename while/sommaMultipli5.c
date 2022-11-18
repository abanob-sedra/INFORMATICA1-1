/** ****************************************************************************************
* \mainpage numeroMinimo.c
*
* @brief Scrivi un programma che esegue la somma di tutti i numeri multipli di 5 compresi 
*		 tra 10 e 100
* 
* @author Tommaso Sollo
* @date 07/10/2022
*/

#include <stdio.h>
#include <limits.h>

int main() 
{
	int n=15, somma=0;
	
	while(n<100) {
		somma+=n;
		n+=5;	
	}
	
	printf("la somma dei multipli di 5 compresi tra 10 e 100 e': %d", somma);
}
