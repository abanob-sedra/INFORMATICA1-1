#include <stdio.h>

int main() {
	int pullman=200, albergo=40, euroalkm=0.5;
	
	int giorni, km;
	
	float costo;
	
	printf("Inserisci il numero di giorni: ");
	scanf("%d", &giorni);
	
	printf("Inserisci numero di km: ");
	scanf("%d", &km);
	
	costo = giorni*(pullman+albergo) + euroalkm * km;
	
	printf("Il costo della gita e' %.2f", costo);
}
