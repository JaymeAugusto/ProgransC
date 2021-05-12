#include<stdio.h>
int main(){
	int hi,hf,tempo;
	tempo = 0;
	scanf("%d%d",&hi,&hf);
	
	if(hi>=hf){
		
		while(hi<24){
			tempo++;
			hi++;
		}
		tempo = tempo+hf;
	}
	
	else{
		tempo = hf - hi;
	}
	
	printf("O JOGO DUROU %d HORA(S)\n",tempo);
		
	return 0;
}
