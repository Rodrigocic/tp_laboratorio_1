#include <stdio.h>
#include <stdlib.h>

/**
 * Verifica los estados de los flags y muestra el resultado de la suma
 * \param Recibe un entero x
 * \param Recibe un entero y
 */
void suma(int x, int y, int f1, int f2);

/**
 * Verifica los estados de los flags y muestra el resultado de la resta
 * \param Recibe un entero x
 * \param Recibe un entero y
 */
void resta(int x, int y, int f1, int f2);

/**
 * Verifica los estados de los flags y muestra el resultado de la division
   (Valida que la division no sea por cero)
 * \param Recibe un entero x
 * \param Recibe un entero y
 */
void dividision(int x, int y, int f1, int f2);

/**
 * Verifica los estados de los flags y muestra el resultado de la multiplicacion
 * \param Recibe un entero x
 * \param Recibe un entero y
 */
void multiplicacion(int x, int y, int f1, int f2);

/**
 * Verifica el estado del primer flag. Si esta en 1, calcula el factorial
   del primer operando, pero si el operando es 1 retorna un 1 como resultado
 * \param Recibe un entero x
 * \return El factorial del numero ingresado
 */
int factorial(int x, int f1);

/**
 * Valida el rango de las opciones entre 1 y 9
 * \param Recibe un entero
 * \return El rango validado
 */
int valRango(int a, int b, int x);

/**
 * Retorna el valor del dato ingresado
 * \return El valor del dato ingresado
 */
int getInt(void);

/**
 * Validacion del primer flag  para saber si fue asignado
 */
void valFlag1(int f1, int x);

/**
 * Validacion del segundo flag  para saber si fue asignado
 */
void valFlag2(int f2, int y);
