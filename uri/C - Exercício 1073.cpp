#include<stdio.h>
int main(){
	int n,cont,pot;
	cont = 2;
	scanf("%d",&n);
	while(cont<=n){
		if(cont%2==0){
			pot = cont*cont;
			printf("%d^2 = %d\n",cont,pot);
		}
		cont++;
	}
	
	return 0;
}
