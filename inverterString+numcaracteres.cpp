#include <stdio.h>

int main (){
	
	int contarCaracteres(char vetor[]);
	void inverter(char vetor[], int numCaracteres);
	
	char vetor[] = {'T', 'I', 'A', 'G', 'O'};
	int	numCaracteres = 0;
	
	
	numCaracteres = contarCaracteres(vetor);
	inverter(vetor, numCaracteres);
	
	
	printf("%s", vetor);
	
	return 0;
}

void inverter(char vetor[], int numCaracteres){
	
	char cVetor[10];
	int posicaoFinal;
	
	
	int i = 0;
	
		while(vetor[i] != '\0'){
			cVetor[i] = vetor[i];
			i++;
		}
		
	posicaoFinal = numCaracteres;
	i = 0;
	
		while (i < numCaracteres){
			posicaoFinal--;
			vetor[i] = cVetor[posicaoFinal];
			i++;
	}
}

int contarCaracteres(char vetor[]){
	
	int numCaracteres = 0;
	
	int i = 0;
	while(vetor[i] != '\0'){
		numCaracteres++;
		i++;
	}
	
	return numCaracteres;
}
