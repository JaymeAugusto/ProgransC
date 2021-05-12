#include<stdio.h>
int main(){
	float salario,salario2,rea,per;
	scanf("%f",&salario);
	
	if(salario<=400){
		salario2 = salario * 1.15;
		rea = salario2 - salario;
		per = 15;
	}
	if(salario>400 && salario<=800){
		salario2 = salario * 1.12;
		rea = salario2 - salario;
		per = 12;
	}
	if(salario>800 && salario<=1200){
		salario2 = salario * 1.10;
		rea = salario2 - salario;
		per = 10;
	}
	if(salario>1200 && salario<=2000){
		salario2 = salario * 1.07;
		rea = salario2 - salario;
		per = 7;
	}
	if(salario>2000){
		salario2 = salario * 1.04;
	}
	//rea = salario2 - salario;
	//per = 4;
	printf("Novo salario: %.2f\n",salario2);
	printf("Reajuste ganho: %.2f\n",rea);
	printf("Em percentual: %.0f %%\n",per);
		
	
	
	return 0;
}
