/** ****************************************************************************************
* \mainpage sommaNumInteri.c
*
* @brief  Scrivi un programma che legge un numero NUM e quindi successivamente esegue la 
*		  somma di NUM numeri inseriti dall'utente
* 
* @author Tommaso Sollo
* @date 07/10/2022
*/

#include <stdio.h>

int main() 
{
	int NUM, n, somma=0, c=0;		//NUM=numero di numeri, n=numero, c=contatore
	
	printf("Inserisci il numero di interi da sommare: ");	//rischiesta numero di numeri
	scanf("%d", &NUM);
	
	while (c<NUM) {
		c++;	//conto cicli
		printf("Inserisci intero: ");	//richiesta numeri
		scanf("%d", &n);
		somma+=n;	//calcolo somma
	}
	
	printf("somma = %d", somma);	//stampa risultato
	

}

