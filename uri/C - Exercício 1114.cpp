#include<stdio.h>
int main(){
	int senha;
	ref: scanf("%d",&senha);
	while(senha != 2002){
		printf("Senha Invalida\n");
		if(senha != 2002)goto ref;	
	}
	printf("Acesso Permitido\n");
	
	return 0;
}

