#include<stdio.h>
int main(){
	int v[5],i,cont;
	cont = 0;
	for(i=0;i<5;i++){
		scanf("%d",&v[i]);
	}
	i = 1;
	while(i<5){
		
		if(v[i]%2==0){
			cont++;
		}
		i++;
	}
	printf("%d valores pares\n",cont);
	return 0;
}
