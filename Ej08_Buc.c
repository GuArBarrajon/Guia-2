/*
Programa: Ej08_Buc.c
Descripción: Imprimir los primeros N números primos.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


int main()
{
    int n, numero, contador, x;
    printf("Indique cuantos numeros primos desea: ");
    scanf("%d", &n);
    numero=0;

    while(n>0)
    {
       numero++;
       x=1;
       contador=0;
       while(x<=numero)
       {
           if(numero%x==0)
           {
               contador++;
           }
           x++;
       }
        if (contador==2)
        {
            printf("%d es primo\n", numero);
            n--;
        }
    }

    return 0;
}