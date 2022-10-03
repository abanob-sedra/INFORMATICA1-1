/*
file: costo_gita.c
autore: Tommaso Sollo
classe: 3°H
data: 03/10/2022
calcolo costo gita: 200€ al giorno di pullman, 40 € al giorno di albergo, 0.5€ al km 
Input: giorni, km
Elaborazione: pullman, albergo, euroalkm
Output: costo
*/

#include <stdio.h>

int main() {
	
	int giorni, km;		//input
	
	int pullman=200, albergo=40, euroalkm=0.5;	//lavoro
	
	float costo;	//output
	
	printf("Inserisci il numero di giorni: ");	//scanf dei giorni
	scanf("%d", &giorni);
	
	printf("Inserisci numero di km: ");		//scanf dei km percorsi
	scanf("%d", &km);
	
	costo = giorni*(pullman+albergo) + euroalkm * km;	// calcolo costo gita
	
	printf("Il costo della gita e' %.2f", costo);		// printf del risultato
}
