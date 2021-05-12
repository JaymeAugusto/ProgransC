#include<stdio.h>
int main(){
	int cod, quant;
	float preco, produto, total;
	preco = 0;
	produto = 0;
	total = 0;	
	scanf("%d %d",&cod, &quant);
	if (cod == 1){
			produto = 4.0;
 		}
	else if (cod == 2){
			produto = 4.5;
		}
	else if (cod == 3){
			produto = 5.0;
		}
	else if (cod == 4){
			produto = 2.0;
		}
	else if (cod == 5){
			produto = 1.5;
		}
	total = quant * produto;
	printf("Total: R$ %.2f\n",total);
	
	
	return 0;
}
