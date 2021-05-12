#include<stdio.h>
int main(){
	int v[6],i,cont;
	cont = 0;
	for(i=0;i<6;i++){
		scanf("%d",&v[i]);
	}
	i = 0;
	while(i<6){
		
		if(v[i]>0){
			cont++;
		}
		
		i++;
	}
	
	printf("%d valores positivos\n",cont);
	
	
	return 0;
}
