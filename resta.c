#include<stdio.h>//libreria de E/S
int resultado; 
int n1; 
int n2; 
int main ()
{//inicio
    printf ("dame un numero");
	scanf("%d",&n1);
	printf ("dame un numero");
	scanf("%d",&n2);
	resultado= n1-n2;
	printf("el resultado es:%d",resultado);
}//fin


