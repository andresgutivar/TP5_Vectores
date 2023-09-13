#include <stdio.h>
#include <stdlib.h>

float prom(float *nota)
{
	float acuto=0,promto=0;
	for (int i=0;i<30;i++)
	{
		acuto+=nota[i];
	}
	
	promto=acuto/30;
	
	return promto;
}
int main() {
	float nota [30];

	
	for (int i=0; i<30; i++)
	{

		printf("ingrese nota alumno %d:\n",i+1);
		scanf("%f",&nota[i]);
	}
	


	printf("promedio del curso:%.2f\n",prom(nota));
}
