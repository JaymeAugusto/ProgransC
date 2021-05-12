#include<stdio.h>
int main(){
	int a, b, fibonacci, i, n;
	a = 0;
	b = 1;
	scanf("%d",&n);
	for(i = 3; i<=n;i++){
		fibonacci = a + b;
		a = b;
		b = fibonacci;
		if(i == n) printf("O %d termo de fibonacci e %d",n,fibonacci);
	}
}
