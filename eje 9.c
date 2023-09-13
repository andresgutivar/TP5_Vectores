#include <stdio.h>
#include <stdlib.h>
int calcular()
{
	int a;
	printf("ingrese la cantidad de numeros que va a ingresar: ");
	scanf("%d",& a);
	return a;
}
int main() {
	int a=calcular();
	int num[a],as=0,des=0;
	
	for(int i=0;i<a;i++)
	{
		printf("ingrese el #%d numero: ",i+1);
		scanf("%d",& num[i]);
	}
	
	for(int i=0;i<a-1;i++)
	{
		if(num[i+1]>num[i])
		{
			as++;
		}
		else
		{
			if(num[i+1]<num[i])
			{
				des++;
			}

		}
	}
	
	if(as==a-1)
	{
		printf("tus numeros estan ordenados de forma ascendente");
	}
	else
	{
		if(des==a-1)
		{
			printf("tus numeros estan ordenados de forma desendente");
		}
		else
		{
			printf("tus numeros estan ordenados de forma desordenada");
		}
	}
	return 0;
}

