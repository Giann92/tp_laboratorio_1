/*
 ============================================================================
 Name        : tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================












 1. Ingresar Kil?metros: ( km=x)
 2. Ingresar Precio de Vuelos: (Aerol?neas=y, Latam=z)
 - Precio vuelo Aerol?neas:
 - Precio vuelo Latam:
 3. Calcular todos los costos:
 a) Tarjeta de d?bito (descuento 10%)
 b) Tarjeta de cr?dito (inter?s 25%)
 c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
 d) Mostrar precio por km (precio unitario)
 e) Mostrar diferencia de precio ingresada (Latam - Aerol?neas)
 4. Informar Resultados
 ?Latam:
 a) Precio con tarjeta de d?bito: r
 b) Precio con tarjeta de cr?dito: r
 c) Precio pagando con bitcoin : r
 d) Precio unitario: r
 Aerol?neas:
 a) Precio con tarjeta de d?bito: r
 b) Precio con tarjeta de cr?dito: r
 c) Precio pagando con bitcoin : r
 d) Precio unitario: r
 La diferencia de precio es : r ?
 5. Carga forzada de datos
 6. Salir
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void) {

	int opcion;
	float x;
	float y;
	float z;
	float rtaDescAero;
	float rtaDescLatam;
	float rtaInteresAero;
	float rtaInteresLatam;
	double rtaBtcAero;
	double rtaBtcLatam;
	float rtaPrecioUnitarioAero;
	float rtaPrecioUnitarioLatam;
	float rtaDifPrecio;

	setbuf(stdout, NULL);

	do {

		printf("\n-----------------------------------------\n");
		printf("    Menu    \n");

		printf("1. Ingresar Kil?metros: ( km ) \n");
		printf("2. Ingresar Precio de Vuelos: (Aerol?neas, Latam)\n");
		printf("3. Calcular todos los costos: \n");
		printf("4. Informar Resultados \n");
		printf("5. Carga forzada de datos \n");
		printf("6. Salir \n");
		printf("\n-------------------------------------------\n");

		scanf("%i", &opcion);
		if (opcion > 0 && opcion < 7) {

			switch (opcion) {
			case 1:
				printf("Ingrese km: ");
				x = IngresarNumero();
				break;

			case 2:
				printf("- Precio vuelo Aerol?neas: \n");
				y = IngresarNumero();
				printf("- Precio vuelo Latam: \n");
				z = IngresarNumero();
				break;
			case 3:
				if (x != 0 && y != 0 && z != 0) {
					printf("a) Tarjeta de debito (descuento 10%c) \n)", 37);

					rtaDescLatam = DescTarjetaDevitoLatam(z, x);
					rtaDescAero = DescTarjetaDevitoAero(y, x);

					printf("b) Tarjeta de credito (inter?s 25%c) \n", 37);

					rtaInteresAero = InteresTCAero(y, x);
					rtaInteresLatam = InteresTCLatam(z, x);

					printf(
							"c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) \n");

					rtaBtcLatam = ValorBitcoinLatam(z, x);
					rtaBtcAero = ValorBitcoinAero(y, x);

					printf("d) Mostrar precio por km (precio unitario) \n");
					rtaPrecioUnitarioLatam = PrecioKmtrsLatam(z, x);
					rtaPrecioUnitarioAero = PrecioKmtrsAero(y, x);

					printf(
							"e) Mostrar diferencia de precio ingresada (Latam - Aerol?neas) \n");

					rtaDifPrecio = DifPrecio(y, z, x);
				} else {
					printf("No hay datos cargados.\n");
				}
				break;
			case 4:
				printf("Kms Ingresado: %.5f \n\n", x);

				printf("Lam: %c %.5f\n" ,36 ,z);
				printf("a) Precio con tarjeta de debito: %c %.5f \n", 36,rtaDescLatam);
				printf("b) Precio con tarjeta de cr?dito: %c %.5f \n", 36,rtaInteresLatam);
				printf("c) Precio pagando con bitcoin : %lf BTC\n",rtaBtcLatam);
				printf("d) Precio unitario: %c %f \n", 36,rtaPrecioUnitarioLatam);

				printf("Aerolineas: %c %.5f\n",36 , y);
				printf("a) Precio con tarjeta de debito: %c %.5f \n", 36,rtaDescAero);
				printf("b) Precio con tarjeta de cr?dito: %c %.5f \n", 36,rtaInteresAero);
				printf("c) Precio pagando con bitcoin : %lf BTC\n", rtaBtcAero);
				printf("d) Precio unitario: %c %f \n", 36,rtaPrecioUnitarioAero);
				printf("\n-------------------------------------------\n");
				printf("La diferencia de precio es : %c %.5f", 36,rtaDifPrecio);
				break;

			case 5:
				if (x == 0 && y == 0 && z == 0) {

					CargaForzada();

				} else {

					printf("Ya ingrasaste una opcion previamente");
				}
				break;

			case 6:
				printf("Gracias ");
				break;
			}

		} else {
			printf("No es una opcion del menu. Reigrese una opcion valida.");
		}

	} while (opcion != 6);

	return EXIT_SUCCESS;
}
