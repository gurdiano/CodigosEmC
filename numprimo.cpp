#include <stdio.h>

int main ()
{
	int num;
	int x;
	int cont = 0;
	
	printf("digite um numero:\n");
	scanf("%i", &num);
	
	for(x = 1; x <= num ; x++ ){
		if (num % x == 0){
		cont++;
		}
} 
	if (cont == 2)
		printf("numero e primo");
	else
		printf("numero nao e primo");
	
	return 0;
}
