#include <stdio.h>
int main(){
	int dist;
	float combust;
	float consumo;
	scanf ("%d",&dist);
	scanf ("%f",&combust);
	consumo = dist/combust;
	printf ("%.3f km/l\n",consumo);
	
	return 0;
	}
