/*
Programa: Ej05_Buc.c
Descripción: Realizar un Programa que implemente el Producto de Wallis para hallar una aproximación
del Numero PI
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

int main()
{
    float operacion=1;
    float contador;
    int limite;

    printf("Ingrese la cantidad de iteraciones: ");
    scanf("%d", &limite);

    for(contador=1; contador<=limite; contador++)   //el cierre debería ser cuando operacion = pi/2 (nunca va a pasar)
    {
        operacion=operacion*((2*contador)*(2*contador))/(((2*contador)-1)*((2*contador)+1));
        printf("%f\n", operacion);
    }
    float pi=operacion*2;
    printf("PI es %f", pi);
    return 0;
}