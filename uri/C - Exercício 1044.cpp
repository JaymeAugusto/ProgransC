#include<stdio.h>
int main(){
	int x,y,result,a1,a2;
	scanf("%d%d",&x,&y);
	if(x<y){
		result = y%x;
	}
	else{
		result = x%y;
	}
	if(result != 0){
		printf("Nao sao Multiplos\n");
	}
	else{
		printf("Sao Multiplos\n");
	}
	
	return 0;
}

