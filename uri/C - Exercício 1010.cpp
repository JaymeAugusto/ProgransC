#include<stdio.h>
int main(){
	int codigo,codigo2,num,num2;
	float vlr,vlr2,result;
	scanf("%d %d %f",&codigo,&num,&vlr);
	scanf("%d %d %f",&codigo2,&num2,&vlr2);
	result = (num*vlr)+(num2*vlr2);
	printf("VALOR A PAGAR: R$ %.2f\n",result);

	
	
	return 0;
}
