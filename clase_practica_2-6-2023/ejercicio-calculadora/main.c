/*!
 * @file    main.c
 * @brief   Main que pide datos y utiliza la funcion "calculadora" con los datos ingresados
 * @author  Marcos Goyret <mgoyret@frba.utn.edu.ar>
 * @date    06/03/2023
 * @details gcc -c main.c -o main.o -Wall
 *          gcc -c funciones.c -o funciones.o -Wall
 *          gcc funciones.o main.o -o prog
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int num1=0, num2=0;
    char op=0;
    float res=0;

    printf("Ingrese operando 1: ");
    scanf("%d", &num1);

    printf("Ingrese operando 2: ");
    scanf("%d", &num2);

    printf("Ingrese operacion '+', '-', '*' o '/': ");
    /* Como vemos, hay un espacio ' ' justo antes del '%c'. Esto es
        Para que el scanf descarte el "enter" almacenado. 
        ver: https://gsamaras.wordpress.com/code/caution-when-reading-char-with-scanf-c/ */
    scanf(" %c", &op);

    if( (op=='/') && (num2==0) )
    {
        printf("Operacion invalida, division por cero\n");
    }else if( op != '+' && op != '-' && op != '*' && op != '/' )
    {
        printf("Operacion invalida\n");
    }else
    {
        res = calculadora(num1, num2, op);
        printf("El resultado es %f\n", res);
    }

    return 0;
}
