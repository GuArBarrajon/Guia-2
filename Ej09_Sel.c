/*
Programa: Ej09_Sel.c
Descripción: Construir un programa que permita ingresar un Nro por teclado y nos diga: Si es
positivo, igual q cero o negativo y si es par o impar.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

int main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
        
    if (numero==0)
    {
        printf("El numero ingresado es igual a 0 ");
    }
    else
    {
        if (numero>0)
        {
            printf("El numero ingresado es POSITIVO ");         
        }    
        else
        {
            printf("El numero es NEGATIVO ");
        }
            
    }  
    if (numero%2==0)  
    {
        printf("y PAR\n");
    }
    else
    {
        printf("e IMPAR\n");
    }
    return 0;
}