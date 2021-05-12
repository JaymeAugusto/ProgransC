#include<stdio.h>
int main(){
	int pares;
	pares = 1;
	
	while(pares<=100){
		
		if(pares%2==0){
			printf("%d\n",pares);
		}
		pares++;
	}
	
	
	return 0;
}
