/** ****************************************************************************************
* \mainpage e_triangoli.c
*
* @brief Scrivere un programma che, lette le misure dei lati di un triangolo, 
* 		 visualizzi se il triangolo è equilatero, isoscele o scaleno
* 
* @author Tommaso Sollo
* @date 26/10/2022
*/

int main() 
{
	
	float a,b,c;
	
	printf("Inserisci i valori dei tre lati:\n");
	scanf("%f%f%f", &a,&b,&c);
	
	if (a==b || b==c || c==a )
		if (a==b && b==c)
			printf("E' un triangolo equilatero");
		else
			printf("E' un triangolo isoscele");
	else 
		printf("E' un triangolo scaleno");
}
