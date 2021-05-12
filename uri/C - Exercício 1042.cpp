#include<stdio.h>
int main(){
	int a,b,c,r1,r2,r3;
	scanf("%d%d%d",&a,&b,&c);
	if(a<=b && a<=c && b<=c){
		r1 = a;
		r2 = b;
		r3 = c;
	}
	else if(a<=b && a<=c && b>=c){
		r1 = a;
		r2 = c;
		r3 = b;
	}
	else if(a>=b && a<=c && b<=c){
		r1 = b;
		r2 = a;
		r3 = c;
	}
	else if(a>=b && a>=c && b<=c){
		r1 = b;
		r2 = c;
		r3 = a;
	}
	else if(a<=b && a>=c && b>=c){
		r1 = c;
		r2 = a;
		r3 = b;
	}
	else if(a>=b && a>=c && b>=c){
		r1 = c;
		r2 = b;
		r3 = a;
	}
	printf("%d\n%d\n%d\n",r1,r2,r3);
	printf("\n");
	printf("%d\n%d\n%d\n",a,b,c);
	return 0;
}
