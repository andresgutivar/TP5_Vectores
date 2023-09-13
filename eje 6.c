#include <stdio.h>
#include <stdlib.h>
int sueldos (float *sueldo)
{ 
	for(int i=0;i<20;i++)
	{
	printf("ingrese el sueldo de la personas #%d: ",i+1);
	scanf("%f",& sueldo[i]);
	}
	int mas=0;
	int menos=0;
	for(int i=0;i<20;i++)
	{
		if(sueldo[i]>=2000)
		{
			mas+=1;
		}
		else
		{
			menos+=1;
		}
	}
	
	printf("la cantidad de personas que cobran menos de 2000 son: %d\n",menos);
	return mas;
}
int main() {
	float sueldo[20];
	
	printf("la cantidad de personas que cobran mas de 2000 son: %d",sueldos(sueldo));
	return 0;
}

