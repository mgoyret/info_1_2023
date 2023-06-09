/*!
 * @file    main.c
 * @brief   Main que pide datos y utiliza la funcion "calculadora" con los datos ingresados
 * @author  Marcos Goyret <mgoyret@frba.utn.edu.ar>
 * @date    06/03/2023
 * @details gcc -c main.c -o main.o -Wall
 *          gcc -c funciones.c -o funciones.o -Wall
 *          gcc funciones.o main.o -o prog
 *          ./prog
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int n1, n2, n3;
    char p1, p2, p3;
    
    printf("numero de carta 1: ");
    scanf("%d", &n1);
    printf("Palo de carta 1: ");
    scanf(" %c", &p1);

    printf("numero de carta 2: ");
    scanf("%d", &n2);
    printf("Palo de carta 2: ");
    scanf(" %c", &p2);
    
    printf("numero de carta 3: ");
    scanf("%d", &n3);
    printf("Palo de carta 3: ");
    scanf(" %c", &p3);

    /* Para simplificar el codigo, no se realiza la verificacion de entrada de datos.
        Lo correcto seria verificar que cada carta tenga valor entre '1' y '12' y que
        cada palo sea una de las 4 opciones: 'e', 'o', 'b' o 'c' */
    
    printf("El envido es: %d\n", envido(n1, n2, n3, p1, p2, p3));

    return 0;
}
