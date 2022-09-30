#include <stdio.h>
#include <math.h>

int main() {
  float lato, d;
  float d2;
  float perimetro_rombo, area_rombo, area_rettangolo, area_quadrato;
  
  printf("inserici valore del lato di un rombo: ");
  scanf("%f", &lato);
  
  printf("inserici valore della diagonale di un rombo: ");
  scanf("%f", &d);
  
  perimetro_rombo = lato * 4;
  d2 = 2*(sqrt(lato*lato - (d/2)*(d/2)));
  area_rombo = (d*d2)/2;
  area_rettangolo = d*d2;
  area_quadrato = lato*lato;
  
  printf("Perimetro rombo = %.2f\nArea rombo = %.2f\nArea rettangolo = %.2f\n Area quadrato = %.2f", perimetro_rombo, area_rombo, area_rettangolo, area_quadrato);
  
}
