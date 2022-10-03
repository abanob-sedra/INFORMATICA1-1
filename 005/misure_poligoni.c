/*
file: misure_poligoni.c
autore: Tommaso Sollo
classe: 3°H
data: 03/10/2022
calcolo area e perimetro di un rombo, l'area di un rettangolo avente le diagonali per lati, l'area di un quadrato che ha per lato il lato del rombo
Input: lato, d1
Elaborazione: d2
Output: perimetro_rombo, area_rombo, area_rettangolo, area_quadrato
*/

#include <stdio.h>
#include <math.h>

int main() {
  float lato, d1;   //input: lato, diagonale minore
  
  float d2;   //lavoro: diagonale maggiore
  
  float perimetro_rombo, area_rombo, area_rettangolo, area_quadrato;  //output
  
  printf("inserici valore del lato di un rombo: "); //scanf del valore del lato
  scanf("%f", &lato);
  
  printf("inserici valore della diagonale di un rombo: ");  //scanf del valore della diagonale minore
  scanf("%f", &d1);
  
  perimetro_rombo = lato * 4; //calcolo perimetro rombo
  
  d2 = 2*(sqrt(lato*lato - (d1/2)*(d1/2))); //calcolo diagonale maggiore del rombo
  
  area_rombo = (d1*d2)/2;   //calcolo area rombo
  
  area_rettangolo = d1*d2;  //calcolo area rettagolo
  
  area_quadrato = lato*lato;  //calcolo area quadrato
  
  printf("Perimetro rombo = %.2f\nArea rombo = %.2f\nArea rettangolo = %.2f\n Area quadrato = %.2f", perimetro_rombo, area_rombo, area_rettangolo, area_quadrato); //scrittura risultato
  
}
