#include<stdio.h>
int main(){
	int  nf, nh;
	float hs, sal;
	scanf("%d %d %f",&nf, &nh, &hs);
	sal = nh * hs;
	printf("NUMBER = %d\n",nf);
	printf("SALARY = U$ %.2f\n",sal);
	
	
	return 0;
}
