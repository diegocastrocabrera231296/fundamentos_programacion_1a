#include <stdio.h>
int main() 
{
	int numeros[10];
	int i;
	int c;
	int auxiliar;
		
	printf("Programa que da la mediana\n");
	printf("ingrese los numeros\n");
	for(i=0;i<10;i++) 
	{
		printf("\n numero %d:",i+1);
		scanf("%d",&numeros[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(c=0;c<10;c++)
		{
			if(numeros[c]>numeros[i])
			{
				auxiliar=numeros[c];
				numeros[c]=numeros[i];
				numeros[i]=auxiliar;
			}
		}
	}
	printf("\n los numero ordenados ");
	for(i=0;i<10;i++) 
	{
		printf("\n%d\n",numeros[i]);
		
	}
	
	printf("la mediana es: %d", numeros[9/2]);
	
	return 0;
}
