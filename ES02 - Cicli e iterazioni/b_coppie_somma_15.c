/** ****************************************************************************************
* \mainpage b_coppie_somma_15.c
*
* @brief Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali 
*        la cui somma è 15. 
* 
* @author Tommaso Sollo
* @date 30/11/2022
*/

#include <stdio.h>      //inclusione librerie

int main() 
{
	int a, b;           //dichiaro le variabili

	printf("\n--Esercizio B Sollo Tommaso--\n\n");

    for(a=1; a<8; a++)              //iterazione primo addendo - limite 8 per non ripetere le stesse somme

        for(b=1; b<15; b++)         //iterazione secondo addendo

            if(a+b==15)                     //stamoa risultato se la somma e' 15
                printf("%d e %d\n", a, b);
}
