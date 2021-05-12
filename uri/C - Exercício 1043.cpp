#include<stdio.h>
int main(){
	float a,b,c,area;
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c && b+c>a && a+c>b)
	{
		area = a+b+c;
		printf("Perimetro = %.1f\n",area);
	}
	else
	{
		area = c*(a+b)/2;
		printf("Area = %.1f\n",area);
	}
	
	
	return 0;
}
