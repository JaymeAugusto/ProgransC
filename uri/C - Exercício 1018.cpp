#include<stdio.h>
int main(){
	int dinheiro, n100, n50, n20, n10, n5, n2, n1;
	n100 = 0; 
	n50 = 0;
	n20 = 0;
	n10 = 0;
	n5 = 0;
	n2 = 0;
	n1 = 0;
	scanf("%d",&dinheiro);
	printf("%d\n",dinheiro);
	while (dinheiro >= 100)
		{
			dinheiro = dinheiro - 100;
			n100 = n100 + 1;
		}
	while (dinheiro >= 50)
		{
			dinheiro = dinheiro - 50;
			n50 = n50 + 1;
		}
	while (dinheiro >= 20)
		{
			dinheiro = dinheiro - 20;
			n20 = n20 + 1;
		}
	while (dinheiro >= 10)
		{
			dinheiro = dinheiro - 10;
			n10 = n10 + 1;
		}
	while (dinheiro >= 5)
		{
			dinheiro = dinheiro - 5;
			n5 = n5 + 1;
		}			
	while (dinheiro >= 2)
		{
			dinheiro = dinheiro - 2;
			n2 = n2 + 1;
		}
	while (dinheiro >= 1)
		{
			dinheiro = dinheiro - 1;
			n1 = n1 + 1;
		}
			
	printf("%d nota(s) de R$ 100,00\n",n100);
	printf("%d nota(s) de R$ 50,00\n",n50);
	printf("%d nota(s) de R$ 20,00\n",n20);
	printf("%d nota(s) de R$ 10,00\n",n10);
	printf("%d nota(s) de R$ 5,00\n",n5);
	printf("%d nota(s) de R$ 2,00\n",n2);
	printf("%d nota(s) de R$ 1,00\n",n1);
	
	return 0;
}
