#include <stdio.h>
#include <stdlib.h>

float calcular (float *r);
int main() {
	float r[5];
	int i=0;
	
	for (i=0;i<5;i++)
	{
		printf("ingrese r%d: ",i+1);
		scanf("%f",& r[i]);
	}
	
	
	//calcular (r);
	
	printf("la sama de todas las resistencias es: %.2f",calcular(r));
	return 0;
}

float calcular (float *r)
{
	float rt=0;
	
	for (int i=0;i<5;i++)
	{
		rt=rt+r[i];
		printf("r%d: %.2f\n",i+1,r[i]);
	}
	
	return rt;
	
}
