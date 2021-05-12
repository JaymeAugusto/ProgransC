#include <stdio.h>
int main(){
	char nome;
	double sal, venda, n1, n2;
	scanf("%s",&nome);
	scanf("%lf %lf",&sal, &venda);
	n1 = venda * 0.15;
	n2 = sal + n1;
	printf("TOTAL = R$ %.2lf\n",n2);
	
	
	return 0;
}
