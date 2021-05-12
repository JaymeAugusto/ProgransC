#include<stdio.h>
#include<stdlib.h>
int main(){
	float N;
	int n100,n50,n20,n10,n5,n2,m1,m050,m025,m010,m005,m001;
	{
	N = 0;
	n100 = 0;
	n50 = 0;
	n20 = 0;
	n10 = 0;
	n5 = 0;
	n2 = 0;
	m1 = 0;
	m050 = 0;
	m025 = 0;
	m010 = 0;
	m005 = 0;
	m001 = 0;
	}	
	scanf("%f",&N);
	while(N >= 100.0)
	{
		n100 = n100 + 1;
		N = N - 100.0;
	}
	while(N >= 50.0)
	{
		n50 = n50 + 1;
		N = N - 50.0;
	}
	while(N >= 20.0)
	{
		n20 = n20 + 1;
		N = N - 20.0;
	}	
	while(N >= 10.0)
	{
		n10 = n10 + 1;
		N = N - 10.0;
	}	
	while(N >= 5.0)
	{
		n5 = n5 + 1;
		N = N - 5.0;
	}	
	while(N >= 2.0)
	{
		n2 = n2 + 1;
		N = N - 2.0;
	}	
	while(N >= 1.0
	{
		m1 = m1 + 1;
		N = N - 1.0;
	}	
	while(N >= 0.50)
	{
		m050 = m050 + 1;
		N = N - 0.50;
	}	
	while(N >= 0.25)
	{
		m025 = m025 + 1;
		N = N - 0.25;
	}		
	while(N >= 0.10)
	{
		m010 = m010 + 1;
		N = N - 0.10;
	}		
	while(N >= 0.05)
	{
		m005 = m005 + 1;
		N = N - 0.05;
	}	
	while(N >= 0.001)
	{
		m001 = m001 + 1;
		N = N - 0.01;
	}
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",n100);
	printf("%d nota(s) de R$ 50.00\n",n50);
	printf("%d nota(s) de R$ 20.00\n",n20);
	printf("%d nota(s) de R$ 10.00\n",n10);
	printf("%d nota(s) de R$ 5.00\n",n5);
	printf("%d nota(s) de R$ 2.00\n",n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",m1);
	printf("%d moeda(s) de R$ 0.50\n",m050);
	printf("%d moeda(s) de R$ 0.25\n",m025);
	printf("%d moeda(s) de R$ 0.10\n",m010);
	printf("%d moeda(s) de R$ 0.05\n",m005);	
	printf("%d moeda(s) de R$ 0.01\n",m001);
	
	return 0;
}
