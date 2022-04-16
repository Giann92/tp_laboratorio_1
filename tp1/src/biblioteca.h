

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_
#include <stdio.h>
/// @fn float IngresarNumero()
/// @brief Pide y devuelve un numero
///
/// @pre
/// @post
/// @return El numero ingresado

float IngresarNumero();
/// @fn float DescTarjetaDevitoLatam(float, float)
/// @brief Pide dos numeros para el calculo
///
/// @pre
/// @post
/// @param z resive un numero
/// @param x resive otro numero
/// @return Devuelve el resultado del descuento
float DescTarjetaDevitoLatam(float z , float x);
/// @fn float DescTarjetaDevitoAero(float, float)
/// @brief Pide dos numeros para el calculo
///
/// @pre
/// @post
/// @param y resive un numero
/// @param x resive otro numero
/// @return Devuelve el resultado del descuento
float DescTarjetaDevitoAero(float y, float x);
/// @fn float InteresTCAero(float, float)
/// @brief Pide dos numeros para el calculo
///
/// @pre
/// @post
/// @param y resive un numero
/// @param x resive otro numero
/// @return Devuelve el resultado del interes
float InteresTCAero(float y, float x);
/// @fn float InteresTCLatam(float, float)
/// @brief Pide dos numeros para el calculo
///
/// @pre
/// @post
/// @param z resive un numero
/// @param x resive otro numero
/// @return Devuelve el resultado del interes
float InteresTCLatam(float z, float x);
/// @fn long ValorBitcoinLatam(float, float)
/// @brief Pide dos numeros para el calculo
///
/// @pre
/// @post
/// @param z resive un numero
/// @param x resive otro numero
/// @return Devuelve el resultado del cambio
long ValorBitcoinLatam(float z , float x);
/// @fn long ValorBitcoinAero(float, float)
/// @brief Pide dos numeros para el calculo
///
/// @pre
/// @post
/// @param y resive un numero
/// @param x resive otro numero
/// @return Devuelve el resultado del cambio
long ValorBitcoinAero(float y , float x);
/// @fn float PrecioKmtrsAero(float, float)
/// @brief Pide dos numeros para el calculo
///
/// @pre
/// @post
/// @param y resive un numero
/// @param x resive otro numero
/// @return Devuelve el resultado por unidad
float PrecioKmtrsAero(float y, float x);
/// @fn float PrecioKmtrsLatam(float, float)
/// @brief Pide dos numeros para el calculo
///
/// @pre
/// @post
/// @param z resive un numero
/// @param x resive otro numero
/// @return Devuelve el resultado por unidad
float PrecioKmtrsLatam(float z, float x);
/// @fn float DifPrecio(float, float, float)
/// @brief Pide tres numeros
///
/// @pre
/// @post
/// @param y resive un numero
/// @param z resive otro numero
/// @param x y resive otro numero mas
/// @return Devuelve la difrenci a de la cuenta
float DifPrecio (float y , float z , float x);
/// @fn void CargaForzada()
/// @brief Tiene una carga forzada,
/// ya tiene todos los datos cargados para prueva
///
/// @pre
/// @post
void CargaForzada();

#endif /* BIBLIOTECA_H_ */
