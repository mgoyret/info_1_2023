/*!
 * @file    funciones.h
 * @brief   Header con funcion calculadora
 * @author  Marcos Goyret <mgoyret@frba.utn.edu.ar>
 * @date    06/03/2023
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_


/*!
 * @brief Funcion calculadora Realiza las 4 operaciones basicas.
 *          Se presupone que si se ingresa una division, el operando 2 no es 0.
 *          Esta verificacion debe realizarse al usar la funcion.
 * @param num1 operando 1.
 * @param num2 operando 2.
 * @param op operacion a realizar.
 * @return Devuelve el resultado de la operacion. Por default es 0.
 */
float calculadora(int, int, char);

#endif // FUNCIONES_H_
