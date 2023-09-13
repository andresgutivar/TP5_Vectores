#include <stdio.h>
#include <stdlib.h>
float suma_producto(float *num)
{
	float suma=0,producto=1;
	for(int i=0;i<10;i++)
	{
		suma+=num[i];
		producto*=num[i];
	}
	
	printf("la suma de todos los numeros es: %.2f",suma);
	printf("\nel producto de todos los numeros es: %.2f",producto);
	float promedio=suma/10;
	return promedio;
}
int main() {
	float num[10];
	printf("ingrese 10 numeros: \n");
	for(int i=0;i<10;i++)
	{
		printf("numero #%d: ",i+1);
		scanf("%f",&num[i]);
	}
	
	float promedio=suma_producto(num);
	printf("\nel promedio de todos los numeros es: %.2f",promedio);
	int dp=0;
	for(int i=0;i<10;i++)
	{
		if(num[i]<promedio)
		{
			printf("\nel numero %.2f de la posicion %d esta por debajo del promedio",num[i],i);
			dp++;
		}
	}
	
	printf("\nlos numeros que estan por debajo del promedio son: %d",dp);
	return 0;
}

