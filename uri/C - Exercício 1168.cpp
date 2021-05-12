#include<stdio.h>
# include <stdlib.h>
#include <string.h>
int main(){
	int n, i, x=0, led=0	; 
	scanf("%d",&n);	
	char ChaMat[10000];
	while(x < n ){
		fflush(stdin);		
		scanf("%s",ChaMat);
		led=0;
		for(i=0;i<strlen(ChaMat);i++){				
			if(ChaMat[i]=='0'|| ChaMat[i]=='9'|| ChaMat[i]=='6'){
				led += 6;
			}
			if(ChaMat[i]=='1'){
				led += 2;
			}	
			if(ChaMat[i]=='2'|| ChaMat[i]=='3'|| ChaMat[i]=='5'){
				led += 5;
			}
			if(ChaMat[i]=='4'){
				led += 4;
			}
			if(ChaMat[i]=='7'){
				led += 3;
			}
			if(ChaMat[i]=='8'){
				led += 7;
			}
		}
		printf("%d leds\n",led);
		x++;
	}
	
}
