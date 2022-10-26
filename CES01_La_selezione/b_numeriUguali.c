/** ****************************************************************************************
* \mainpage numeriUguali.c
*
* @brief Scrivere un programma che, richiesti due numeri interi qualsiasi, segnali se i due numeri sono uguali; in caso contrario indichi il minore e il maggiore.
* 
* @author Tommaso Sollo
* @date 07/10/2022
*/

int main() {
  int a,b;
  printf("Inserisci due interi: ");
  scanf("%d%d", &a, &b);
  
  if(a==b) {
    printf("i numeri sono uguali");
  } else {
    if(a>b){
      printf("%d>%d", a, b);
    } else {
      printf("%d>%d", b, a);
  }
 
}

