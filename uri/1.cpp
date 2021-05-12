#include<stdio.h>
int main(){
	int a=7, b=15,c = 4 ,x,y,z;
	x = b++ - --a; //15 - 6 = 9, b=16 a=6
	y = ++c * --a; //5 * 5 = 25, c=5 a=5
	z = a + b +c ; //5 + 16 + 5 = 26
	
	printf("x=%d\ny=%d\nz=%d\n",x,y,z);
	return 0;
	
}
