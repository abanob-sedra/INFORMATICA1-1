/** ****************************************************************************************
* \mainpage a_divisoreNumero.c
*
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
* @author Tommaso Sollo
* @date 30/11/2022
*/

#include <stdio.h>		//inclusione librerie

int main() 
{
	int n, i;			//dichiaro le variabili
	
	printf("Inserisci un numero: ");	//richiesta input del numero
	scanf("%d", &n);
	
	for(i = 2; i < n; i++)		//itero tutti gli interi da 2 al numero inserito
	{
		if(n%i==0)								//controllo se l'indice e' un divisore
			printf("%d e' un divisore\n", i);		
	}	
}
