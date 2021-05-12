#include<stdio.h>
int main(){
	int v[100],i,maior,posicao;
	for(i=0;i<100;i++){
		scanf("%d",&v[i]);
	}
	i=1;
	maior=v[0];
	
	while(i<100){
		if(v[i] > maior){
		maior = v[i];
		posicao = i;
		}
		i++;
	}
	posicao++;
	printf("%d\n",maior);
	printf("%d\n",posicao);
	
	return 0;
}
