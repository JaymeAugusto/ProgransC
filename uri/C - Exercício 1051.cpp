#include<stdio.h>
int main(){
	float sal,imp=0;
	scanf("%f",&sal);
	if(sal>2000){
		if(sal>3000){
			imp += 1000*0.08;
		}
		else{
			imp += (sal-2000)*0.08;	
		}
	}
	if(sal>3000){
		if(sal>4500){
			imp += 1500*0.18;
		}
		else{
			imp += (sal-3000)*0.18;
		}
	}
	if(sal>4500){
		imp += (sal-4500)*0.28;	
	}
	
	if(sal<=2000){
		printf("Isento\n");
	}
	else{
		printf("%.2f\n",imp);
	}
	
	return 0;
}
