#include <stdio.h>

int main (){
	
	int numDeCaracteres(char string[]);
	void concatenarStrings(char string1[], int numCS1, char string2[], int numCS2, char string3[], int numCS3, char newString[]);
	
	char string1[20];
	char string2[20];
	char string3[20];
	char newString[100];
	int somaCaracteres;
	
	scanf("%s", &string1);
	scanf("%s", &string2);
	scanf("%s", &string3);
	
	int numCS1 = numDeCaracteres(string1);
	int numCS2 = numDeCaracteres(string2);
	int numCS3 = numDeCaracteres(string3);
	
	somaCaracteres = numCS1 + numCS2 + numCS3;
	
	concatenarStrings(string1, numCS1, string2, numCS2, string3, numCS3, newString);
	
	for(int i = 0; i < somaCaracteres; i++){
		printf("%c", newString[i]);
	}
	
	return 0;
}

int numDeCaracteres(char string[]){

	int numCaracteres = 0;
	
	while(string[numCaracteres] != '\0'){
		numCaracteres++;
		if(string[numCaracteres] == '\0'){
			numCaracteres++;
		}
	}	
		
	printf("num de caracteres = %d\n", numCaracteres);
	
	return numCaracteres;
}

void concatenarStrings(char string1[], int numCS1, char string2[], int numCS2, char string3[], int numCS3, char newString[]){
	
	for(int i = 0; i < numCS1; i++){
		newString[i] = string1[i];
	}
	
	for(int i = 0; i < numCS2; i++){
		newString[i + numCS1] = string2[i];
	}
	for(int i = 0; i < numCS3; i++){
		newString[i + numCS1 + numCS2] = string3[i];
	}
	
}


