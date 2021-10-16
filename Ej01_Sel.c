/*
 Programa: Ej01_Sel.c
 Descripción: Ingresar 2 números, si a < b informar a*b , en caso contrario a/b.
 Autor: Gustavo Barrajón
 Modificó:
*/

#include<stdio.h>

int main()
{
    int a, b, producto;
    float division;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    if (a<b)
    {
      producto=a*b;
      printf("El resultado del primer numero multiplicado por el segundo es: %d\n", producto);
    }
    else
    {
      division=a/b;
      printf("El resultado del primer numero dividido por el segundo es: %f\n", division);  
    }    
    return 0;
}