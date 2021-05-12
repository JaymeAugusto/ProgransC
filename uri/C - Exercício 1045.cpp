#include<stdio.h>
int main(){
	double a,b,c,help;
	help = 0;
	scanf("%lf%lf%lf",&c,&b,&a);
	
	if(a<b){
		help = b;
		b = a;
		a = help;
	}
	
	 else if(a<c){
		help = c;
		c = a;
		a = help;
	}
	
	if(a>=(b+c)){
		printf("NAO FORMA TRIANGULO\n");
	}
	
	else if((a*a)==(b*b)+(c*c)){
		printf("TRIANGULO RETANGULO\n");
	}
	
	else if((a*a)>(b*b)+(c*c)){
		printf("TRIANGULO OBTUSANGULO\n");
	}
	
	else if((a*a)<(b*b)+(c*c)){
		printf("TRIANGULO ACUTANGULO\n");
	}
	
	if(a==b&&b==c){
		printf("TRIANGULO EQUILATERO\n");
	}
	
	else if(a==b||a==c||b==c){
		printf("TRIANGULO ISOSCELES\n");
	}
	
	
	return 0;
	
}
