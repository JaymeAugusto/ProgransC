#include<stdio.h>
int main(){
	int N,s,m,h;
	float tot;
	{
		N = 0;
		h = 0;
		m = 0;
		s = 0;
	}
	scanf("%d",&N);
	if (N >= 3600)
	{
		h = N/3600;
		N = N -(h*3600);
	}
	if (N >= 60)
	{
		m = N/60;
	}
	s = N%60;
	printf("%d:%d:%d\n",h,m,s);
	
	
	
	return 0;
}
