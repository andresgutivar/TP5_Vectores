#include <stdio.h>
#include <stdlib.h>
float mayor(float *num)
{
	float mayor=0;
	
	for(int j=0;j<5;j++)
	{
		if(j==0)
		{
			mayor=num[j];
		}
		else
		{
		if(mayor<=num[j])
		{
			mayor=num[j];
		}

	}
	}
	
	printf("tu numero mayor es: %.2f",mayor);
	return 0;
}
int main() {
	float num[5];
	
	for(int i=0;i<5;i++)
	{
		printf("ingrese el numero %d: ",i+1);
		scanf("%f",& num[i]);
	}
	
	mayor(num);
	return 0;
}

