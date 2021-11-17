/*
Programa: Ej01_Matrices.c
Realizar un programa que presente un menu con las siguientes opciones:
1. Cargar una matriz de MxN de tipo float.
2. Informar el promedio de todos los valores.
3. Informar la suma de los valores de una fila (definida por el usuario).
4. Informar el producto de la diagonal principal y el de la diagonal secundaria.
5. Informar la cantidad de números positivos y negativos en una columna (definida por
el usuario).
6. Mostrar la matriz traspuesta.
7. Salir del programa.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


void cargarMatriz(float v[3][3]);
float promedio(float v[3][3]);
float sumaFila(float v[3][3]);
void productoDiagonales(float v[3][3]);
void positNegat(float v[3][3]);
void traspuesta(float v[3][3]);
void imprimirMatriz(float v[3][3]);

void main()
{
    float matriz[3][3];
    int opcion;
    do
    {
        printf("MENU:\n1. Cargar una matriz.\n2. Informar el promedio de todos los valores.\n3. Informar la suma de los valores de una fila.\n4. Informar el producto de la diagonal principal y el de la diagonal secundaria.\n5. Informar la cantidad de numeros positivos y negativos en una columna.\n6. Mostrar la matriz traspuesta.\n7. Salir del programa\nElija una opcion: ");
        scanf("%d", &opcion);
        fflush(stdin);
        switch (opcion)
        {
        case 1:
            cargarMatriz(matriz);
            printf("Matriz de 3x3 ingresada\n");
            imprimirMatriz(matriz);
            break;

        case 2:
            printf("El promedio de los elementos de la matriz es: %0.2f\n", promedio(matriz));
            break;

        case 3:
            printf("La suma de la fila es: %0.2f\n", sumaFila(matriz));
            break;

        case 4:
            productoDiagonales(matriz);
            break;

        case 5:
            positNegat(matriz);
            break;

        case 6:
            printf("Su traspuesta\n");
            traspuesta(matriz);
            break;
        }
    } while (opcion!=7);
    
        
    
    
}

void cargarMatriz(float v[3][3])
{
    for(int i=0; i<3; i++)          
    {                  
        for(int j=0; j<3; j++)      
        {
            v[i][j]=0;
        }
    }
    for(int i=0; i<3; i++)          
    {                  
        for(int j=0; j<3; j++)      
        {
            printf("Ingrese un numero: ");
            scanf("%f", &v[i][j]);
        }
    }
}

float promedio(float v[3][3])
{
    float suma=0, promedio;
    for(int i=0; i<3; i++)          
    {
        for(int j=0; j<3; j++)      
        {
            suma=suma+v[i][j];
        }
    }
    promedio=suma/9;
    return promedio;
}

float sumaFila(float v[3][3])
{
    int fila;
    float suma;
    printf("Ingrese la fila que desea sumar: ");
    scanf("%d", &fila);
    for(int j=0; j<3; j++)      
    {
        suma=suma+v[fila][j];
    }
    return suma;
}


void imprimirMatriz(float v[3][3])
{
    for(int i=0; i<3; i++)          
    {
        for(int j=0; j<3; j++)      
        {
            printf("%0.2f  ", v[i][j]);
        }
        printf("\n");
    }
}

void productoDiagonales(float v[3][3])
{
    float prod1=1, prod2=1;
    for(int i=0; i<3; i++)          
    {                  
        for(int j=0; j<3; j++)      
        {
            if(i==j)
                prod1=prod1*v[i][j];
        }
    }  
    if(prod1==-0.00)
        prod1=0;
    printf("El producto de la diagonal principal es: %0.2f\n", prod1);
    for(int i=0; i<3; i++)          
    {                  
        for(int j=0; j<3; j++)      
        {
            if((i==1 && j==1) || (i==0 && j==2) || (i==2 && j==0))
                prod2=prod2*v[i][j];
        }
    } 
    if(prod2==-0.00)
        prod2=0;  
    printf("El producto de la diagonal secundaria es: %0.2f\n", prod2);
}

void positNegat(float v[3][3])
{
    int positivo=0, negativo=0, cero=0, columna;
    printf("Indique la columna a analizar: ");
    scanf("%d", &columna);
    for(int i=0; i<3; i++)          
    {                       
        if(v[i][columna]==0)
        {
            cero++;
        }
        else
        {
            if(v[i][columna]>0)
            {
                positivo++;
            }
            else
            {
                negativo++;
            }
        }
    }
    printf("La columna %d de la matriz tiene %d numero/s positivo/s, %d negativo/s y %d cero/s\n", columna, positivo, negativo, cero);  
}

void traspuesta(float v[3][3])
{
    for(int i=0; i<3; i++)          
    {                  
        for(int j=0; j<3; j++)      
        {
            printf("%0.2f  ", v[j][i]);
        }
        printf("\n");
    }  
}