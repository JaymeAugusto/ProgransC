#include<stdio.h>
int main(){
	int n,x,x2,x3;
	x = 0;
	scanf("%d",&n);
	while(x<n){
		x = x + 1;
		x2 = x * x;
		x3 = x * x * x;
		printf("%d %d %d\n",x,x2,x3);
	}
	
	
	return 0;
}
