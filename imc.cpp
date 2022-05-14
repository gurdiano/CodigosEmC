#include <stdio.h>
int main ()
{
	float cm;
	float kg;
	float imc;
	
	printf("Informe sua altura em cm\n");
	scanf("%f", &cm);
	
	printf("informe seu peso em kg\n");
	scanf("%f", &kg);
	
	imc = kg / (( cm * cm )/10000);
	
	if (imc <= 18.5)
		printf("Seu IMC e: %f magreza", imc);
	else if (imc >= 18.5 && imc <= 24.9)
		printf("Seu IMC e: %f Saudavel", imc);
	else if (imc >= 25.0 && imc <= 29.9)
		printf("Seu IMC e: %f Sobrepeso", imc);
	else if (imc >= 30.0 && imc <= 34.9)
		printf("Seu IMC e: %f Obesidade moderada", imc);
	else if (imc >= 35.0 && imc <= 39.9)
		printf("Seu IMC e: %f Obesidade clinica", imc);
	else 
		printf("Seu IMC e: %f obesidade morbida", imc);
	
	
	return 0;
}
