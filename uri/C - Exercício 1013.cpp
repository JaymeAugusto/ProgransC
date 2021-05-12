#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c,tot;
	scanf("%d %d %d",&a,&b,&c);
	tot = (a + b + abs(a-b))/2;
	tot = (tot + c + abs(tot-c))/2;
	printf("%d eh o maior\n",tot);
	
	
	
	return 0;
}
