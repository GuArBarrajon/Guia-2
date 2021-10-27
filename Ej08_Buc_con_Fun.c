/*
Programa: Ej08_Buc.c
Descripción: Imprimir los primeros N números primos.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

int primo(int num);

void main()
{
    int n;
    printf("Indique cuantos numeros desea analizar: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(primo(i))
        {
            printf("%d es primo\n", i);
        }
    }
}

int primo (int num)
{
    if(num!=0 && num!=1)
    {
        for(int i=2; i<=num; i++)
        {
            if(num%i==0)
            {
                if (i==num)
                {
                    return 1;
                }
                else
                {
                    return 0;
                } 
            }
        }
    }
    return 0;
}