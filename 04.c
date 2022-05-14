#include <stdio.h>
int main ()
{

	int d0,d1,d2,df;
	int h0,h1,h2,hf;
	int m0,m1,m2,mf;
	int s0,s1,s2,sf;
	int ts1,ts2,ts3;
	int sobra, sobra2;
 	
	scanf("%*s %d", &d1);
	scanf("%d %*s", &h1);
	scanf("%d %*s", &m1);
	scanf("%d", &s1);
	
	scanf("%*s %d", &d2);
	scanf("%d %*s", &h2);
	scanf("%d %*s", &m2);
	scanf("%d", &s2);
	
	//converter tudo para segundos
	m0 = 60; 
	h0 = 60 * m0; 
	d0 = 24 * h0;
	
	m1 = m1 * m0;
	h1 = h1 * h0;
	d1 = d1 * d0;
	
	m2 = m2 * m0;
	h2 = h2 * h0;
	d2 = d2 * d0;

	//somar tomos os segundos
	ts1 = s1 + m1 + h1 + d1;
	ts2 = s2 + m2 + h2 + d2;
	//dif em segundos
	ts3 = ts2 - ts1;
	
	//conv min to date
	df = ts3 / (24 * h0);
	sobra = ts3 % (24 * h0);
	hf = sobra / (60 * m0);
	sobra2 = sobra % (60 * m0);
	mf = sobra2 / 60;
	sf = sobra2 % 60;

	
	printf("%d dia(s)\n", df);
	printf("%d hora(s)\n", hf);
	printf("%d minuto(s)\n", mf);
	printf("%d segundo(s)\n", sf);
	
	return 0;
}
