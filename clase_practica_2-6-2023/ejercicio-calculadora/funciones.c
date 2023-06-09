/*!
 * @file    funciones.c
 * @brief   Desarrollo de la funcion para la calculadora
 * @author  Marcos Goyret <mgoyret@frba.utn.edu.ar>
 * @date    06/03/2023
 */
#include "funciones.h"


float calculadora(int num1, int num2, char op)
{
    float res = 0;

    switch (op)
    {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                res = num1 / num2;
            break;
        default:
            res = 0;
            break;
    }

    return res;
}
