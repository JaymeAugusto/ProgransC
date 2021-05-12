#include<stdio.h>
int main(){
	char op[5];
	int i,j,c;
	double m[12][12],soma=0.0;
	scanf("%d",&c);
	scanf("%s",&op);
	
	for(i=0; i<12; i++){
		
		for(j=0; j<12; j++){
			scanf("%lf",&m[i][j]);
		}
	}
		
	for(j=0; j<12; j++){	
		soma+= m[j][c];
	}	
	if(op[0] =='M'){
		soma/=12.0;
		
	}
	printf("%.1lf\n",soma);
	
	
	return 0;
}
