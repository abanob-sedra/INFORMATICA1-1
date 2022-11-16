/** ****************************************************************************************
* \mainpage contaPari.c
*
* @brief  Leggi una serie di interi e conta i numeri pari, se l'utente digita 0 ferma e scrivi 
*		  il numero di numeri pari inseriti
* 
* @author Tommaso Sollo
* @date 16/11/2022
*/

#include <stdio.h>

int main () 
{
	int n, c = 0;	//n = numero inserito, c = contatore
	
	do
	{
		printf("Inserisci un intero: ");		//chiedo numero
		scanf("%d", &n);						
		
		if (n % 2 == 0)		//controllo se numero è pari
			c++;			// se numero è pari aumento di 1 il contatore
			
	} while (n != 0);		//ciclo 
	
	c--;		//decremento di 1 il contatore per non contare lo 0 come pari
	
	printf("Hai inserito %d numeri pari", c);	//stampa risultato
}
			
			
			
			
