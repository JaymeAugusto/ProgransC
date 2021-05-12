#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	double a, b, c, raiz, x, x2;
	scanf("%lf %lf %lf",&a,&b,&c);
	system("CLS");
	if (a!=0 && b!=0 && c!=0){
		raiz = sqrt(b*b-4*a*c);
		if (raiz > 0) {
			x = (-b)+(raiz);
			x = x/(2*a); 
			x2 = (-b)-(raiz);
			x2 = x2/(2*a); 
			printf("R1 = %.5lf\n",x);
			printf("R2 = %.5lf\n",x2);
		}
		else{
		printf("Impossivel calcular\n");
		}
	}
	else{
		printf("Impossivel calcular\n");
	}
	
		
	return 0;
}
