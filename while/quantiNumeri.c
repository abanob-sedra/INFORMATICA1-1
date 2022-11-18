/** ****************************************************************************************
* \mainpage trovaMassimoDi10.c
*
* @brief  Scrivi un programma che legge una sequenza di numeri interi terminanti con uno 0
*		  e visualizza quanti numeri sono stati inseriti
* 
* @author Tommaso Sollo
* @date 16/11/2022
*/

#include <stdio.h>

int main() 
{
	int n, c;
	
	do 
	{
		printf("inserisci un numero: ");
		scanf("%d", &n);
		
		c++;
	} while(n!=0);
	
	printf("hai inserito %d numeri", c);
			
}
