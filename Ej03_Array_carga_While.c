/*
Programa: Ej03_Array.c
Descripción: Ingresar datos a un vector finalizando con un número negativo, informar el producto.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#include<limits.h>
#define MAX 100   //no se puede poner el array sin declarar cantidad como en JS

int carga(int v[]);
int producto(int v[]);

void main()
{
    int numero[MAX];
    carga(numero);
    
    printf("El producto de los numeros ingresados es %d\n", producto(numero));
}

int carga(int v[])
{
    for (int i=0; i<MAX; i++)
        v[i]=-1;

    int i=0;
    printf("Ingrese un numero POSITIVO a multiplicar o uno NEGATIVO para finalizar: ");
    scanf("%d", &v[i]);
    while(v[i]>0)   
    {               
        i++;
        printf("Ingrese un numero POSITIVO a multiplicar o uno NEGATIVO para finalizar: ");
        scanf("%d", &v[i]);
        
    }
}

int producto(int v[])
{
    int prod=1;
    for(int i=0; i<MAX; i++)
    {
        if(v[0]<0)          //condición para que si el primer número ingresado es negativo no responda que el producto es 1
            return 0;

        if(v[i]<0)
        {
            break;
        }
        else   
        {
            prod=prod*v[i];
        }
    }
    return prod;
}