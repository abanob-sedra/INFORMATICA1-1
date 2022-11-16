/** ****************************************************************************************
* \mainpage trovaMassimoDi10.c
*
* @brief  Scrivere un programma che legge un numero NUM e visualizza tutti i numeri pari 
*         minori a tale numero
* 
* @author Tommaso Sollo
* @date 16/11/2022
*/

#include <stdio.h>

int main() 
{
	int NUM;
	
	printf("Inserisci un intero");	//richiesta numero
	scanf("%d", &NUM);
	
	NUM -= NUM%2;	//se il numero è dispari lo porto al numero pari inferiore più vicino
	
	while (NUM>0)
	{
		printf("%d\n", NUM);	//scrivo il numero
		NUM -= 2;		//passo al prossimo numero pari inferiore
	}
			
}
