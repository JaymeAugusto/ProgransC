#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n,i;
	char s[20];
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%s",s);
		if(i!=0) printf(" ");
		if(strlen(s)==3 && s[0]=='O' && s[1]=='B'){
			printf("OBI");
		}
		else if(strlen(s)==3 && s[0]=='U' && s[1]=='R'){
			printf("URI");
		}
		else{
			printf("%s",s);
		}
	}
	printf("\n");
	
	return 0;
}
