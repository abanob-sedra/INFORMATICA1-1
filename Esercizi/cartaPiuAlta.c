#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FICHES 10
#define N_GIOCATORI 2

int main()
{
	int carta, i, g1 = FICHES, g2 = FICHES, primaCarta, c;
	srand(time(NULL));
	
	do{
		
		printf("---Bilancio---\n\n");
		printf("Giocatore 1 = %d fiches\n", g1);
		printf("Giocatore 2 = %d fiches\n\n", g2);
		
		g1--;
		g2--;
		
		printf("\n---Carte---\n\n");
		
		for(i=0; i<N_GIOCATORI; i++){
			carta = rand() % 10 + 1;
			printf("Carta giocatore %d = %d\n", i+1, carta);
			
			if(i==0) {
				primaCarta = carta;
			} else{
				if(primaCarta>carta)
					c=1;
				else if(primaCarta<carta)
					c=0;
				else
					c=2;
			}
		}
		
		printf("\n\n---Risultato Round---\n");
		
		if(c && c!=2){
			printf("\nvince il giocatore 1!\n");
			g1+=2;
		}
		else if (!c && c!=2){
			printf("\nVince il giocatore 2!\n");
			g2+=2;
		}
		else {
			printf("Pareggio, il banco prende tutto!");
		}
		
		printf("\n");
		system("pause");
	}while(g1!=0 && g2!=0);
	
	printf("\n\n---Risultati Partita---");
	
	if(g1)
		printf("\nIl giocatore 2 ha finito le fiches, vince la partita il giocatore 1!");
	else
		printf("\nIl giocatore 1 ha finito le fiches, vince la partita il giocatore 2!");
	
}
