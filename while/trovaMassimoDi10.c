/** ****************************************************************************************
* \mainpage trovaMassimoDi10.c
*
* @brief  scrivi un programma che legge 10 numeri e ne stampa il maggiore 
* 
* @author Tommaso Sollo
* @date 07/10/2022
*/

#include <stdio.h>

int main() 
{
	int n, c=0, max;	//c=contatore
	
	while(c<10)
	{
		c++;	//conto cicli
		
		printf("inserisci un numero: ");	//chiedo numero
		scanf("%d", &n);
		
		if(c==1 || n>max)	//se è il primo ciclo o se il numero inserito è maggiore del
			max = n;		//precedente maggiore metto n in max
	}
	
	printf("il maggiore e' %d", max);	//stampa del risultato
}
