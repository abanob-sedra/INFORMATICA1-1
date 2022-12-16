#include <stdio.h>

int main()
{
    int n1, n2, somma = 0;

    printf("Inserisci due numeri interi \n");
    scanf("%d%d", &n1, &n2);

    for(int i = n1; i<=n2; i++){
        somma += i;

        printf("%d\t", i);
    }

    printf("\nSomma = %d\n", somma);
}