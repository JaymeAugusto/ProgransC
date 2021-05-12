#include<stdio.h>
int main(){
	int N,x,result;
	x = 0;
	scanf("%d",&N);
	while(x<10){
		x = x + 1;
		result = x * N;
		printf("%d x %d = %d\n",x,N,result);
	}
	
	
	return 0;
}
