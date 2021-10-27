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
    printf("Ingrese la operacion a realizar (+, -, *, /): ");
    scanf(" %c", &c);
    printf("Ingrese el segundo valor: ");
    scanf(" %f", &b);
    
    result=menu (a, b, c);
    printf("%f %c %f = %f", a, c, b, result);
}

float menu (float num1, float num2, char operacion)
{
    float resultado;
    switch (operacion)
    {
    case '+':
        resultado=num1+num2;
        break;
    
    case '-':
        resultado=num1-num2;
        break;

    case '*':
        resultado=num1*num2;
        break;
    
    case '/':
        resultado=num1/num2;
        break;
    
    default:
        printf("La operacion ingresada NO es valida\n");
        break;
    }
    return resultado;
}