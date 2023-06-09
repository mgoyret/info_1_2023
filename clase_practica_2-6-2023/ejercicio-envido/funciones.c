/*!
 * @file    funciones.c
 * @brief   Desarrollo de la funcion para la calculadora
 * @author  Marcos Goyret <mgoyret@frba.utn.edu.ar>
 * @date    06/03/2023
 */
#include "funciones.h"


int envido(int n1, int n2, int n3, char p1, char p2, char p3)
{
    int res = 0;

    /* Para una mejor implementacion, aqui tambien podriamos verificar que
        los numeros y palos sean todos validos, y en caso contrario retornar
            res = -1
        o algun codigo de error similar */


    // si nuestro 'if' tiene dentro una sola sentencia a ralizar,
    // podemos evitar poner las llaves '{}'
    if ((n1 > 9) && (n1 < 13))
        n1=0;
    if ((n2 > 9) && (n2 < 13))
        n2=0;
    if ((n3 > 9) && (n3 < 13))
        n3=0;

    if ((p1 != p2) && (p1 != p2) && (p2 != p3))
    {
        if((n1 > n2) && (n1 > n3))
            res = n1;
        else if((n2 > n1) && (n2 > n3))
            res = n2;
        else
            res = n3;
    }else if( (p1 == p2) && (p2 == p3) )
    {
        if( (n1 < n2) && ((n1 < n3)) )
            res = 20 + n2 + n3;
        else if( (n2 < n1) && (n2 < n3) )
            res = 20 + n1 + n3;
        else
            res = 20 + n1 + n2;
    }else if (p1 == p2)
        res = 20 + n1 + n2;
    else if(p1 == p3)
        res = 20 + n1 + n3;
    else if(p2 == p3)
        res = 20 + n2 + n3;

    return res;
}