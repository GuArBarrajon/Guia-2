/*
 Programa: Ej08_Sel.c
 Descripción: Lea 3 Números por teclado y descubra si Uno de ellos, es la suma de los otros Dos. Debe
informarlo por pantalla indicado qué Numero es la suma de los otros dos.
 Autor: Gustavo Barrajón
 Modificó:
*/

#include<stdio.h>

int main()
{
    int num1, num2, num3, suma1, suma2, suma3;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);
    suma1=num2+num3;
    suma2=num1+num3;
    suma3=num1+num2;
    
    if (num1==suma1)
    {
        printf("El PRIMER numero es igual a la suma de los otros dos\n");
    }
    else
    {
        if (num2==suma2)
        {
            printf("El SEGUNDO numero es igual a la suma de los otros dos\n");         
        }    
        else
        {
            if (num3==suma3)
            {
                printf("El TERCER numero es igual a la suma de los otros dos\n");
            }
            else
            {
                printf("NINGUNO de los numeros es igual a la suma de los otros dos\n");
            }
        }
    }    
    return 0;
}