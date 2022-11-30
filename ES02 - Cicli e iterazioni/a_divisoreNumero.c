/** ****************************************************************************************
* \mainpage a_divisoreNumero.c
*
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
* @author Tommaso Sollo
* @date 30/11/2022
*/

#include <stdio.h>

int main() 
{
	int n, i;
	
	printf("Inserisci un numero: ");
	scanf("%d", &n);
	
	for(i = 2; i <= n/2; i++)
	{
		if(n%i==0)
			printf("%d e' un divisore\n", i);
	}	
}
