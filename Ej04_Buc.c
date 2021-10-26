/*
Programa: Ej04_Buc.c
Descripción: Ingresar números, sumarlos. Se termina cuando se ingresó un 0, informar la cantidad de
datos ingresados y los números múltiplos de 3.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


int main()
{
    int numero, suma, contador;
    suma=0;
    contador=0;
    int multiplo3=0;
    
    do
    {
        printf("Ingrese un numero POSITIVO o NEGATIVO para sumar o CERO para finalizar ");
        scanf("%d", &numero);
        
        if(numero!=0)
        {
            suma=suma+numero;
            contador++;
        }
        if (numero%3==0 && numero!=0)
        {
            multiplo3++;
        }
    } while(numero!=0);

    
    printf("La cantidad de numeros ingresados es %d, su suma es %d y %d son multiplos de 3\n",contador, suma, multiplo3);
    return 0;
}
