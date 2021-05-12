#include<stdio.h>
int main(){ 
	float media,a,b,c,d,e,f,cont;
	cont = 0;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	
	if(a>0){
		cont++;		
		media = media + a;
	}
	
	if(b>0){
		cont++;		
		media = media + b;
	}
	
	if(c>0){
		cont++;		
		media = media + c;
	}
	
	if(d>0){
		cont++;		
		media = media + d;
	}
	
	if(e>0){
		cont++;		
		media = media + e;
	}
	
	if(f>0){
		cont++;		
		media = media + f;
	}
	
	
	media = media/cont;
	printf("%.0f valores positivos\n",cont);
	printf("%.1f\n",media);
	
	
	return 0;
}
