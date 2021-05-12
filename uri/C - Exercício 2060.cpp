#include<stdio.h>
int main(){
	int x,z,i,m2=0,m3=0,m4=0,m5=0;
	scanf("%d",&x);
	
	for(i=0; i<x; i++){
		scanf("%d",&z);
		if(z%2==0){
			m2++;
		}
		if(z%3==0){
			m3++;
		}
		if(z%4==0){
			m4++;
		}
		if(z%5==0){
			m5++;
		}
	}
	printf("%d Multiplo(s) de 2\n",m2);
	printf("%d Multiplo(s) de 3\n",m3);
	printf("%d Multiplo(s) de 4\n",m4);
	printf("%d Multiplo(s) de 5\n",m5);
	
	
		return 0;
}
