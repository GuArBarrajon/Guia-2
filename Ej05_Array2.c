/*
Programa: Ej05_Array2.c
Escribir un programa que posea un menú con las siguientes opciones:
1. Leer por teclado 2 cadenas de caracteres.
2. Imprimirlas cada cadena del derecho y al revés.
3. Dar la longitud de las cadenas, sin incluir el NULL.
4. Copiar las dos cadenas, una después de la otra, mostrando el Resultado por pantalla.
5. Buscar una cadena dentro de la otra y avisar por pantalla la posición de la 2da cadena
donde empiezan a ser iguales.
6. Convertir la cadena todo a Minúsculas o Mayúsculas, según lo desee el usuario.
7. Salir del programa. (el programa se repite hasta que se seleccione esta opción).
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#include<string.h>
#include <ctype.h>
#define MAX 20

void cargarcadena(char cadena[]);
void imprimirCadena(char cadena[]);
void darVuelta(char cadena[]);
int contarElementos(char cadena[]);
void copiarCadenas(char c1[], char c2[], char c3[]);
void buscarPalabra(char c1[], char c2[], char c3[]);
void mayuscMinusc(char c1[], char c2[], char c3[]);



void main (void)
{
    char cadena1[MAX], cadena2[MAX], cadena3[MAX];
    int opcion, elementos1, elementos2;
    do
    {
        printf("MENU:\n1. Leer por teclado 2 cadenas de caracteres.\n2. Imprimir cada cadena al derecho y al reves.\n3. Dar la longitud de las cadenas\n4. Copiar las dos cadenas, una despues de la otra, mostrando el Resultado por pantalla.\n5. Buscar una cadena dentro de la otra\n6. Convertir la cadena todo a Minusculas o Mayusculas\n7. Salir del programa\nElija una opcion: ");
        scanf("%d", &opcion);
        fflush(stdin);
        switch (opcion)
        {
        case 1:
            cargarcadena(cadena1);
            cargarcadena(cadena2);
            break;

        case 2:
            printf("Cadenas al derecho:\n");
            imprimirCadena(cadena1);
            imprimirCadena(cadena2);
            printf("Cadenas al reves:\n");
            darVuelta(cadena1);
            darVuelta(cadena2);
            break;

        case 3:
            elementos1=contarElementos(cadena1);
            elementos2=contarElementos(cadena2);
            printf("La primera cadena tiene %d elementos.\n", elementos1);
            printf("La segunda cadena tiene %d elementos.\n", elementos2);
            break;

        case 4:
            copiarCadenas(cadena1, cadena2, cadena3);
            break;

        case 5:
            buscarPalabra(cadena1, cadena2, cadena3);
            break;

        case 6:
            mayuscMinusc(cadena1, cadena2, cadena3);
            break;
        }
    } while (opcion!=7);
    
}

void cargarcadena(char cadena[])
{
    printf("Ingrese una palabra o frase: ");
    gets(cadena);
}

void imprimirCadena(char cadena[])
{
    printf("%s\n", cadena);
}

void darVuelta(char cadena[])
{
    printf("%s\n", strrev(cadena));
}

int contarElementos(char cadena[])
{
    return strlen(cadena);
}

void copiarCadenas(char c1[], char c2[], char c3[])
{
    strcpy(c3, c1);
    strcat(c3, " ");
    strcat(c3, c2);
    imprimirCadena(c3);
}

void buscarPalabra(char c1[], char c2[], char c3[])
{
    copiarCadenas(c1, c2, c3);
    char palabra[20];
    printf("Ingrese una palabra a buscar: ");
    gets(palabra);
    if (strstr(c3, palabra) != NULL)
    {
        printf("Existe %s dentro de %s\n", palabra, c3);
    } 
    else
    {
        printf("No existe %s dentro de %s\n", palabra, c3);
    }
}

void mayuscMinusc(char c1[], char c2[], char c3[])
{
    copiarCadenas(c1, c2, c3);
    char opcion;
    printf("Desea la cadena en mayusculas(+) o minusculas(-) ");
    scanf(" %c", &opcion);

    if(opcion=='+')
    {
        for(int i=0; c3[i]!='\0'; i++)
        {
            c3[i]=toupper(c3[i]);
        }
    }

    if(opcion=='-')
    {
        for(int i=0; c3[i]!='\0'; i++)
        {
            c3[i]=tolower(c3[i]);
        }
    }
    imprimirCadena(c3);
}
