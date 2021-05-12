#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	char op[5];
	int i,j,l,m[12][12];
	double soma=0.0;
	scanf("%d",&l);
	scanf("%s",&op);
	srand(time(NULL));
	
	for(i=0; i<12; i++){
		
		for(j=0; j<12; j++){
			m[i][j] = rand() % 100;
		}
	}
	
	for(i=0; i<12; i++){
		
		for(j=0; j<12; j++){
			printf("|%3d |", m[i][j]);
		}
		printf("\n");
	}
		
	for(j=0; j<12; j++){	
		soma+= m[l][j];
	}	
	if(op[0] =='M'){
		soma/=12.0;
		printf("MEDIA = %.1lf\n",soma);	
	}else{
		printf("SOMA = %.1lf\n",soma);
	}
	return 0;
}
