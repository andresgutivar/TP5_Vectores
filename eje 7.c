#include <stdio.h>
#include <stdlib.h>

int calcular(float *nota, int *resul)
{
	int bandera=0;
	for(int i=0;i<6;i++)
	{
		printf("ingrese la nota del alumno n°%d: ",i+1);
		scanf("%f",&nota[i]);
		
		if (nota[i]>=8)
		{
			resul[i]=i+1;//Si la nota es mayor a 8 guardo la posición +1 en otro vector para que coincida con el valor mostrado.
			bandera++;//Cambiamos el valor de la bandera porque se produjo un cambio en el vector de los mayores a 8.
		}
		else
		{
			resul[i]=-10;//relleno así los espacios que no debo mostrar.
		}
	}

	return	bandera;
}


int main ()
{
	float nota[6];
	int resul[6], bandera;//Los valores de I siempre son enteros.
	
	bandera=calcular(nota,resul);
	
	if (bandera>0)
	{
		printf("Las notas mayores a 8 corresponden a los alumnos:\n ");
		for(int i=0;i<6;i++)
		{
			if(resul[i]>=0)//muestro solo los valores distintos a -10, porque así decidí rellenar los espacios que no muestro.
			{
				printf("%d\n",resul[i]);
			}
		}
	}
	else
	{
		printf("Ninguno de los alumnos tiene nota superior a 8");
	}
}
//printf("la nota mayor a 8 tiene la posicion: %d\n",aux);
