/*
Programa: Ej10_Sel.c
Descripción: Ingresar un Dígito por teclado, del 0 al 10, e imprimirlo en Letras: Si Ingreso 1, imprimir
“Uno”, si ingreso 2, imprimir “Dos”, y así sucesivamente.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

int main()
{
    int numero;
    printf("Ingrese un numero del 0 al 10: ");
    scanf("%d", &numero);
        
   switch (numero)
   {
   case 0:
       printf("CERO\n");
       break;
   case 1:
       printf("UNO\n");
       break;
   case 2:
       printf("DOS\n");
       break;
   case 3:
       printf("TRES\n");
       break;
   case 4:
       printf("CUATRO\n");
       break;
   case 5:
       printf("CINCO\n");
       break;
   case 6:
       printf("SEIS\n");
       break;  
   case 7:
       printf("SIETE\n");
       break;
   case 8:
       printf("OCHO\n");
       break;
   case 9:
       printf("NUEVE\n");
       break;
   case 10:
       printf("DIEZ\n");
       break;
   default:
       printf("Opcion incorrecta\n");
       break;
   }
   return 0;
}