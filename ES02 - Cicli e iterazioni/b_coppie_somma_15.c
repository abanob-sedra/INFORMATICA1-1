/** ****************************************************************************************
* \mainpage b_coppie_somma_15.c
*
* @brief Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali 
*        la cui somma è 15. 
* 
* @author Tommaso Sollo
* @date 30/11/2022
*/

#include <stdio.h>

int main() 
{
	int a, b;
	printf("\n--Esercizio B Sollo Tommaso--\n\n");

    for(a=1; a<8; a++)

        for(b=1; b<15; b++)

            if(a+b==15)
                printf("%d e %d\n", a, b);



}
