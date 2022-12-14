#include <stdio.h>

int main()
{
    int n, i;
    float media = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        media += i;
    }

    media /= (float)n;

    printf("\n%.2f\n", media);

}