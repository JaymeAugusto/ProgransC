#include<stdio.h>
int main(){
	int N,teste,base,var;
	base = 0;
	scanf("%d",&N);
	while(base<N){
		base=base+1;
		teste = 0;
		scanf("%d",&teste);
		var = teste%2;
		if (teste == 0){
			printf("NULL\n");
		}
		else if(var!=0 && teste<0){
			printf("ODD NEGATIVE\n");
		}
		else if(var!=0 && teste>0){
			printf("ODD POSITIVE\n");
		}
		else if(var==0 && teste>0){
			printf("EVEN POSITIVE\n");
		}
		else if(var==0 && teste<0){
			printf("EVEN NEGATIVE\n");
		}
	}
	
	
	return 0;
}
