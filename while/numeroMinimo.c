/** ****************************************************************************************
* \mainpage numeroMinimo.c
*
* @brief Scrivi un programma che legge una sequenza di numeri interi terminanti con uno 0 e
*        strettamente maggiori di 0 e ne ricerca il valore minimo scrivendolo a schermo
* 
* @author Tommaso Sollo
* @date 07/10/2022
*/

#include <stdio.h>
#include <limits.h>

int main() 
{
	int n, min = INT_MAX;
	
	do {
		printf("inserisci un numero maggiore di 0: ");
		scanf("%d", &n);
		
		if (n<min && n!=0) 
			min=n;
	} while (n!=0);
	
	printf("Il numero minore che hai inserito e' %d", min);
	
}
