#include <stdio.h>
int main ()
{
	int num[10];
	
	for(int i = 0; i < 10 ; i++){
		
		scanf("%i", &num[i]);
	}
	
	
	for(int i = 0; i < 10 ; i++){
	
	if (num[i] < 0 )
	
	num[i]= num[i] * -1;
	
	}
	
		
	int menor = num[0];
	
	for (int i = 0; i < 10 ; i++){
		
		for (int j = i + 1; j < 10; j++){
			
			if (num[i] < num[j] && menor > num[i]){ menor = num[i]; }
			
			else if (num[j] < num[i] && menor > num[j]){ menor = num[j]; }		
		}
	}

	printf("%i", menor);
	
	return 0;
}
