/*
Programa: Ej03_Buc.c
Descripción: Ingresar datos finalizando con un número negativo, informar el producto.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


int main()
{
    int numero, producto;
    numero=0;
    producto=1; 
    while(numero>=0)
    {
    printf("Ingrese un numero POSITIVO a multiplicar o uno NEGATIVO para finalizar ");
    scanf("%d", &numero);
        if (numero>0)    //agregado para que no multiplique el negativo
        {
        producto=producto*numero;  //se puede poner antes del printf y evitar el if
        }
    } 
    
    printf("El producto de los numeros ingresados es %d\n", producto);
    return 0;
}