#include <stdio.h>
#include <stdlib.h>
int intermedios(int *inter,int r, int n)
{
	
	for (int i=0;i<r;i++)
	{
		inter[i]=n+1;
		n++;
	}
	
	return inter[r];

}
int main() {
	int num1,num2,r,n;
	
	printf("ingrese un numero: ");
	scanf("%d",&num1);
	
	printf("ingrese un numero: ");
	scanf("%d",&num2);
	if(num1==num2)
	{
		printf("no existen valores intermedios\n");
	}
	else
	{
	if(num1>num2)
	{

	n=num2;
	r=num1-num2;
	}
	else
	{
	
		n=num1;
		r=num2-num1;
	}
	if(r==1 || r==0)
	{
		printf("no existen valores intermedios\n");
	}
	}
	
	int inter[r];

	intermedios(inter,r,n);
	

	r=r-1;
	for (int i=0; i<r;i++)
	{
		printf("numeros intermedios : %d\n",inter[i]);
	}

	return 0;
}

