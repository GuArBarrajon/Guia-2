/*
Programa: Ej02_Buc.c
Descripción: Ingresar 10 números e informar el número máximo.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#include<limits.h>

int main()
{
    int numero, i, maximo;
    maximo= INT_MIN;
    for (i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        if (numero>maximo)
        {
            maximo=numero;
        }
    }
    printf("El mayor de numeros ingresados es %d\n", maximo);
    return 0;
}