#include<stdio.h>
int main(){
	int X,cont,x2;
	scanf("%d",&X);
	x2 = X + 12;
	while(X<x2){
		if(X%2!=0){
			printf("%d\n",X);
		}
		X++;		
	}
	
	
	return 0;
}
