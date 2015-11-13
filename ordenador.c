/*Programa que ordena numeros de mayo a menor*/
#include<stdio.h>//Libreria de E/S

             int n1;
             int n2;
             int n3;
             int n4;
             int n5;
             int n6;
             int n7;
             int n8;
             int n9;
             int n10;
             int mayor;
             int menor;
		     int main()
        {
             printf("Ingrese el primer numero: \n");
             scanf("%d", &n1);
             printf("Ingrese el segundo numero: \n");
             scanf("%d", &n2);
             printf("Ingrese el tercer numero: \n");
             scanf("%d", &n3);
             printf("Ingrese el cuarto numero: \n");
             scanf("%d", &n4);
             printf("Ingrese el quinto numero: \n");
             scanf("%d", &n5);
             printf("Ingrese el sexto numero: \n");
             scanf("%d", &n6);
             printf("Ingrese el septimo numero: \n");
             scanf("%d", &n7);
             printf("Ingrese el octavo numero: \n");
             scanf("%d", &n8);
             printf("Ingrese el noveno numero: \n");
             scanf("%d", &n9);
             printf("Ingrese el decimo numero: \n");
             scanf("%d", &n10);

             if (n1>n2 && n1>n3 && n1>n4 && n1>n5 && n1>n6 && n1>n7 && n1>n8 && n1>n9 && n1>n10){
             mayor=n1;
             }else
             if (n2>n1 && n2>n3 && n2>n4 && n2>n5 && n2>n6 && n2>n7 && n2>n8 && n2>n9 && n2>n10){
             mayor=n2;
             }else
             if (n3>n1 && n3>n2 && n3>n4 && n3>n5 && n3>n6 && n3>n7 && n3>n8 && n3>n9 && n3>n10){
             mayor=n3;
             }else
             if (n4>n1 && n4>n2 && n4>n3 && n4>n5 && n4>n6 && n4>n7 && n4>n8 && n4>n9 && n4>n10){
             mayor=n4;
             }else
             if (n5>n1 && n5>n2 && n5>n3 && n5>n4 && n5>n6 && n5>n7 && n5>n8 && n5>n9 && n5>n10){
             mayor=n5;
             }else 
             if (n6>n1 && n6>n2 && n6>n3 && n6>n4 && n6>n5 && n6>n7 && n6>n8 && n6>n9 && n6>n10){
             mayor=n6;
             }else 
             if (n7>n1 && n7>n2 && n7>n3 && n7>n4 && n7>n5 && n7>n6 && n7>n8 && n7>n9 && n7>n10){
             mayor=n7;
             }else 
             if (n8>n1 && n8>n2 && n8>n3 && n8>n4 && n8>n5 && n8>n6 && n8>n7 && n8>n9 && n8>n10){
             mayor=n8;
             }else 
             if (n9>n1 && n9>n2 && n9>n3 && n9>n4 && n9>n5 && n9>n6 && n9>n7 && n9>n8 && n9>n10){
             mayor=n9;
             }else 
             if (n9>n1 && n9>n2 && n9>n3 && n9>n4 && n9>n5 && n9>n6 && n9>n7 && n9>n8 && n9>n10){
             mayor=n9;
             }else 
             if (n10>n1 && n10>n2 && n10>n3 && n10>n4 && n10>n5 && n10>n6 && n10>n7 && n10>n8 && n10>n9){
             mayor=n10;
             }else 
             if (n1<n2 && n1<n3 && n1<n4 && n1<n5 && n1<n6 && n1<n7 && n1<n8 && n1<n9 && n1<n10){
             menor=n1;
             }else
             if (n2<n1 && n2<n3 && n2<n4 && n2<n5 && n2<n6 && n2<n7 && n2<n8 && n2<n9 && n2<n10){
             menor=n2;
             }else
             if (n3<n1 && n3<n2 && n3<n4 && n3<n5 && n3<n6 && n3<n7 && n3<n8 && n3<n9 && n3<n10){
             menor=n3;
             }else
		     if (n4<n1 && n4<n2 && n4<n3 && n4<n5 && n4<n6 && n4<n7 && n4<n8 && n4<n9 && n4<n10){
             menor=n4;
             }else
             if (n5<n1 && n5<n2 && n5<n3 && n5<n4 && n5<n6 && n5<n7 && n5<n8 && n5<n9 && n5<n10){
             menor=n5;
             }else
             if (n6<n1 && n6<n2 && n6<n3 && n6<n4 && n6<n5 && n6<n7 && n6<n8 && n6<n9 && n6<n10){
             menor=n6;
             }else
             if (n7<n1 && n7<n2 && n7<n3 && n7<n4 && n7<n5 && n7<n6 && n7<n8 && n7<n9 && n7<n10){
             menor=n7;
              }else
             if (n7<n1 && n7<n2 && n7<n3 && n7<n4 && n7<n5 && n7<n6 && n7<n8 && n7<n9 && n7<n10){
             menor=n7; 
              }else
             if (n8<n1 && n8<n2 && n8<n3 && n8<n4 && n8<n5 && n8<n6 && n8<n7 && n8<n9 && n8<n10){
             menor=n8;
              }else
             if (n9<n1 && n9<n2 && n9<n3 && n9<n4 && n9<n5 && n9<n6 && n9<n7 && n9<n8 && n9<n10){
             menor=n9;
               }else
             if (n10<n1 && n10<n2 && n10<n3 && n10<n4 && n10<n5 && n10<n6 && n10<n7 && n10<n8 && n10<n9){
             menor=n10; 
             }else
             
			 
			 printf("Sus numeros fueron:\n");
			 printf("numero mayor %d\n", mayor);
			 printf("numero menor %d\n", menor);
             return 0;
             }



