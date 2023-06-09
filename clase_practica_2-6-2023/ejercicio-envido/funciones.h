/*!
 * @file    funciones.h
 * @brief   Header con funcion envido()
 * @author  Marcos Goyret <mgoyret@frba.utn.edu.ar>
 * @date    06/03/2023
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_


/*!
 * @brief Calcula si hay envido, segun las 3 cartas recibidas
 * @param n valores de las cartas.
 * @param p palos de las cartas.
 *          e = espada
 *          b = basto
 *          o = oro
 *          c = copa
 * @return 0 si no hay envido, 1 si hay envido.
 */
int envido(int, int, int, char, char, char);

#endif // FUNCIONES_H_
