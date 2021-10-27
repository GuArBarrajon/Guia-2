/*
Escribir un programa que realice las siguientes tareas: Leer 2 números reales , llame a
una función menu() con 4 opciones + - * /, realizar la operación correspondiente y
mostrar el resultado.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

float menu (float num1, float num2, char operacion);

void main (void)
{
    float a, b, result;
    char c;
    printf("Ingrese el primer valor: ");
    scanf(" %f", &a);
    printf("Ingrese el segundo valor: ");
    scanf(" %f", &b);
    printf("Ingrese la operacion a realizar (+, -, *, /): ");
    scanf(" %c", &c);
    result=menu (a, b, c);
    printf(" %f %c %f = %f\n", a, c, b, result);

}

float menu (float num1, float num2, char operacion)
{
    float resultado;
    if (operacion=='+')
    {
        resultado=num1+num2;
    }
    else
    {
        if (operacion=='-')
        {
            resultado=num1-num2;
        }
        else
        {
            if (operacion=='*')
            {
                resultado=num1*num2;
            }
            else
            {
                if (operacion=='/')
                {
                    resultado=num1/num2;
                }
                else
                {
                    printf("La operacion ingresada NO es valida\n");
                }
            }
        }
    }
    return resultado;
}
