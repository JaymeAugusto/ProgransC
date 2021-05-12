#include<stdio.h>
int main(){
	char op[5];
	int i,j,mee=0;
	double m[12][12],soma=0.0;
	scanf("%s",&op);
	
	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			scanf("%lf",&m[i][j]);
		}
	}
		
	for(i=0; i<11; i++){
		for(j=0; j<11-i; j++){
			soma += m[i][j];
			mee++;
		}
	}
	if(op[0] =='M'){
		soma/=mee;
		
	}
	printf("%.1lf\n",soma);
	
	
	return 0;
}
