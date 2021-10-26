/*
Escribir un programa que realice las siguientes tareas: Leer 2 números reales , llame a
una función menu() con 4 opciones + - * /, realizar la operación correspondiente y
mostrar el resultado.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

int menu (int num1, int num2, char operacion);

void main (void)
{
    int a, b;
    char c;
    printf("Ingrese el primer valor: ");
    scanf("%d", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &b);
    printf("Ingrese la operacion a realizar (+, -, *, /): ");
    scanf(" %c", &c);
    menu (a, b, c);
}

int menu (int num1, int num2, char operacion)
{
    if (operacion=='+')
    {
        int suma=num1+num2;
        printf("La suma de los numeros ingresados es: %d\n", suma);
    }
    else
    {
        if (operacion=='-')
        {
            int resta=num1-num2;
            printf("La diferencia de los numeros ingresados es: %d\n", resta);
        }
        else
        {
            if (operacion=='*')
            {
                int multiplicacion=num1*num2;
                printf("El producto de los numeros ingresados es: %d\n", multiplicacion);
            }
            else
            {
                if (operacion=='/')
                {
                    int division=num1/num2;
                    printf("La division de los numeros ingresados es: %d\n", division);
                }
                else
                {
                    printf("La operacion ingresada no es valida\n");
                }
            }
        }
    }
    return 0;
}