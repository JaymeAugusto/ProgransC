#include<stdio.h>
int main(){
	int tempo,velocidade;
	float tot;
	scanf("%d %d",&tempo,&velocidade);
	tot = (tempo*velocidade)/12.0;
	printf("%.3f\n",tot);
	
	
	
	return 0;
}
