/*
Programa: Ej03_Array.c
Descripción: Ingresar datos a un vector finalizando con un número negativo, informar el producto.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#define MAX 100    //no se puede poner el array sin declarar cantidad como en JS

int main()
{
    int numero[MAX], producto=1, i;

    for(i=0; i<MAX; i++)
    {
    printf("Ingrese un numero POSITIVO a multiplicar o uno NEGATIVO para finalizar ");
    scanf("%d", &numero[i]);

    if(numero[i]<0)  
        break;

    producto=producto*numero[i]; 
    } 
    
    printf("El producto de los numeros ingresados es %d\n", producto);
    return 0;
}