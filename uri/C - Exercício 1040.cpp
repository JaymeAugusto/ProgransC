#include<stdio.h>
int main(){
	float n1,n2,n3,n4,n5,media,media2;
	scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
	media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
	printf("Media: %.1f\n",media);
	
	if(media>=7){
		printf("Aluno aprovado.\n");
	}
	
	else if(media<5){
		printf("Aluno reprovado.\n");
	}
	
	else if(media>=5 && media<7){
		printf("Aluno em exame.\n");
		scanf("%f",&n5);
		media2 = (media+n5)/2;
		printf("Nota do exame: %.1f\n",n5);
		
		if(media2 >=5){
			printf("Aluno aprovado.\n");
		}
		
		else{
			printf("Aluno reprovado.\n");
		}
		
		printf("Media final: %.1f\n",media2);
	}
	
	
	return 0;
}
