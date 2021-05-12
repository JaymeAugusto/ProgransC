#include<stdio.h>
int main(){
	float prova1, prova2, trab1, trab2, media, exame, mediaexame;
	scanf("%f%f%f%f",&prova1, &prova2, &trab1, &trab2);
	media = (prova1 + prova2 + trab1 + trab2)/4.0;
	if(media < 40 ){
		printf("Reprovado\n");
	}else if(media < 70){
		printf("Em exame\n");
		scanf("%f",&exame);
		mediaexame = (exame + media)/2.0;
		if(mediaexame < 50){
			printf("Reprovado exame\n");
		}else{
			printf("Aprovado exame\n");
		}
	}else{
		printf("Aprovado\n");
	}
}
