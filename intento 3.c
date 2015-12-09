#include<stdio.h>
#include <stdlib.h>
#define SIZE 50

char cadena[SIZE];
char remplazar, buscar, i, j;
//remplazar[SIZE]
int main()
{   char j,i= 0;
    // leer sentencia
    char subcadena [SIZE];
    char cadR[SIZE];
    int a=0;
	printf("Escribe la palabra\n");
    fgets(cadena, SIZE, stdin );
    // imprime la sentencia ingresada
    printf("Sentencia introducida\n");
     for(i; cadena[i] != '\0'; i++){
	    printf("%c", cadena[i]);
	}
	// buscar una subcadena
  	printf("Que letras quieres sustituir\n");  
    fgets(subcadena,SIZE,stdin);
    j=0;
    for(i=0; cadena[i]!='\0'; i++)
	{
    	if(subcadena[j]== cadena[i] || subcadena[j+1]=='\0')
		{
    
    		j ++;
		}			
		if(subcadena[j] == '\0'){
	        break;
		} 	
	}	
	// imprime subcadena encontrada
	printf("subcadena encontrada\n");	
	// pregunta cardR
	printf("Porque letras la quieres cambiar\n"); 
	fgets(cadR, SIZE, stdin);
	// cadR= ['p','o']
	
	 for(a; subcadena[a] != '\0'; a++){
	    if(subcadena[a] == '\0'){
		   break;
		}
   }
    i=i-a;
    printf("Valor i %d", i);
    
	for(j = 0; cadR[j] != '\0'; j++)
	{	
	    cadena[i]=cadR[j];						
	    i++;
	}
	// imprime el resultado
	printf("Sentencia modificada\n");
	
     for(i=0; cadena[i] != '\0'; i++){
	    printf("%c", cadena[i]);
	}
		
	system("pause"); 
	
	
}
