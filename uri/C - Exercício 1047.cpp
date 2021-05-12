#include<stdio.h>
int main(){
	int hi,hf,tempo,tempomin,mi,mf;
	tempo = 0;
	tempomin = 0;
	scanf("%d%d%d%d",&hi,&mi,&hf,&mf);
	
	if(hi>hf&&mi>=mf){
		
		while(hi<24){
			tempo++;
			hi++;
		}
		tempo = tempo+hf-1;
	}
	else if(hi==hf&&mi>=mf){
		
		while(hi<24){
			tempo++;
			hi++;
		}
		tempo = tempo+hf;
	}
	
	else{
		
		if(mi<=mf){
			tempo = hf - hi;
		}
		
		else{
			tempo = hf - hi -1;
		}
	} 
	
	if(mi>mf){
		tempomin = mi - mf;
		tempomin = 60 - tempomin;
    }
	
	else{
		tempomin = mf - mi;
	}
	
	if(tempo == 24 && tempomin != 0){
		tempo--;
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempo,tempomin);
		
	return 0;
}
