#include <stdio.h>

int main() 
{
  float base, altezza;
  float area;
  
  printf("Inserisci il valore della base: ");
  scanf("%f", &base);
  
  printf("Inserisci il valore dell'altezza: ");
  scanf("%f", &altezza);
  
  area = base * altezza / 2;
  
  printf("area triangolo = %f", area);
}
