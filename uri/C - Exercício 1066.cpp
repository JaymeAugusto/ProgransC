#include<stdio.h>
int main(){
	int n,i,qp=0,qi=0,qpos=0,qneg=0;
	
	for(i=0;i<5;i++){
		scanf("%d",&n);
		
		if(n%2 == 0){
			qp++;
		}
		else{
			qi++;
		}
		
		if(n>0){
			qpos++;
		}
		else if(n<0){
			qneg++;
		}
	}
	printf("%d valor(es) par(es)\n",qp);
	printf("%d valor(es) impar(es)\n",qi);
	printf("%d valor(es) positivo(s)\n",qpos);
	printf("%d valor(es) negativo(s)\n",qneg);
	
	
	return 0;
}
