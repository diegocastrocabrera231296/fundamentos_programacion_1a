#include<stdio.h>//libreria de E/S 
int calificacion; 
int main ()  
 
{
	printf("dame tu calificacion");
    scanf("%d", &calificacion);
	if(calificacion>=7)
	{
		printf("aprobado");
	}

	else
	{
		printf("reprobado");
	} 
}
