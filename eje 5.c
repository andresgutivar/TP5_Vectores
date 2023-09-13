#include <stdio.h>
#include <stdlib.h>

float total_ventas(float *dias)
{
	float totalventas;
	float mayor=0,aux=0;
	for(int i=0;i<2;i++)
	{
		for(int k=0;k<3;k++)
		{
			printf("ingrese la venta del vendedor numero %d en el dia %d : ",i+1,k+1);
			scanf("%f",&dias[i]);
			totalventas+=dias[i];
			if(k==0 && i==0)
			{
				mayor=dias[i];
				
			}
			else
			{
				if(mayor<=dias[i])
				{
				mayor=dias[i];
				aux=i+1;
				}
			}
		}
		
	}	
	
	
	printf("el vendedor con la mayor venta diaria es el numero %.0f, con %.2f ventas\n",aux,mayor);
	return totalventas;
}
int main() {
	float dias[3];
	
	printf("total de ventas a lo largo de los 15 dias: %.2f",total_ventas(dias));

	return 0;
}

