/** ****************************************************************************************
* \mainpage b_coppie_somma_15.c
*
* @brief Si scriva un programma per calcolare la media aritmetica di una serie di numeri 
*        inseriti da tastiera. L’introduzione del valore 0 indica il termine del caricamento 
*        dei dati.

* 
* @author Tommaso Sollo
* @date 30/11/2022
*/

#include <stdio.h>

int main() 
{
    printf("\n--Esercizio C Sollo Tommaso--\n\n");

	int n, c=0, somma=0;
    float media=0;

    do 
    {
        printf("Insersici un numero: ");
        scanf("%d", &n);
        media += n;
        if(n!=0) 
            c++;
    } while (n!=0);

    media /= c;

    printf("\nLa media dei numeri e' %.2f\n", media);
	
}