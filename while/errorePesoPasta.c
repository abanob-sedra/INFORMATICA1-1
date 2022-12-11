#include <stdio.h>


int main() 
{
	float peso, erroreMax, pesoNom, percErr, c;
    int cErr=0;

    printf("Inserisci massima percentuale di errore: ");
    scanf("%f", &erroreMax);

    printf("Inserisci il peso nominale: ");
    scanf("%f", &pesoNom);

    erroreMax = pesoNom / 100 * erroreMax;

    do{
        printf("Inserisci peso pacchetto: ");
        scanf("%f", &peso);

        c++;

        if((pesoNom - peso) > erroreMax || (pesoNom - peso) < erroreMax * -1){
            printf("Scarta\n");
            cErr++;
            if(cErr>=5) break;
        }
        
    } while(1);

    percErr = cErr * 100 / c;

    printf("Percentuale di errore = %.2f\n", percErr);
}