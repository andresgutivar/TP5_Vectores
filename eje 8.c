#include <stdio.h>
#include <stdlib.h>
int finalizacion()
{
	int fin;
	printf("ingrese la posicion hasta la que se va a imprimir la secuencia fibonachi: ");
	scanf("%d",&fin);
	while(fin<=0)
	{
		system("cls");
		printf("ERROR\ningrese la posicion hasta la que se va a imprimir la secuencia fibonachi: ");
		scanf("%d",&fin);
	}
	return fin;
}
int main() {
	int fin=finalizacion();
	int fibo[fin];
	fibo[0]=0;
	fibo[1]=1;
	if (fin==1)
	{
		printf("0");
	}
	else
	{
	printf("tu secuencia fibonachi es: 0 ");
	for(int i=2;i<=fin;i++)
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	
	
	for(int i=1;i<fin;i++)
	{
		printf("%d ",fibo[i]);
	}
	}
	
	return 0;
}

