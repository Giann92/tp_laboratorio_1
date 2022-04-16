#include "biblioteca.h"

float IngresarNumero() {
	float numero;

	scanf("%f", &numero);
	while (numero <= 0) {
		printf(
				"Error , numero no puede ser cero o negativo. reigrese por favor \n");
		scanf("%f", &numero);
	}
	return numero;
}

float DescTarjetaDevitoLatam(float z, float x) {

	float desc;
	float respuesta;
	float totalPrecio = z * x;
	desc = totalPrecio * 0.1;
	respuesta = totalPrecio - desc;

	return respuesta;
}
float DescTarjetaDevitoAero(float y, float x) {

	float desc;
	float respuesta;
	float totalPrecio = y * x;
	desc = totalPrecio * 0.1;
	respuesta = totalPrecio - desc;

	return respuesta;
}
float InteresTCAero(float y, float x) {
	float aumento;
	float respuesta;
	float totalPrecio = y * x;
	aumento = totalPrecio * 0.25;
	respuesta = totalPrecio + aumento;

	return respuesta;
}
float InteresTCLatam(float z, float x) {

	float aumento;
	float respuesta;
	float totalPrecio = z * x;
	aumento = totalPrecio * 0.25;
	respuesta = totalPrecio + aumento;

	return respuesta;
}
long ValorBitcoinAero(float y, float x) {
	long respuesta;
	long bitcoin;
	float totalPrecio;
	bitcoin = 4778869.90;

	totalPrecio = y * x;

	respuesta = totalPrecio / bitcoin;

	return respuesta;
}

long ValorBitcoinLatam(float z, float x) {
	long respuesta;
	long bitcoin;
	float totalPrecio;
	bitcoin = 4778869.90;

	totalPrecio = z * x;

	respuesta = totalPrecio / bitcoin;

	return respuesta;
}

float PrecioKmtrsAero(float y, float x) {

	float respuesta;

	respuesta = y / x;

	return respuesta;
}
float PrecioKmtrsLatam(float z, float x) {

	float respuesta;

	respuesta = z / x;

	return respuesta;
}

float DifPrecio(float y, float z, float x) {

	float precioAero = y;
	float precioLatam = z;
	float kmtrs = x;
	float precioTotalAero;
	float precioTotalLatam;
	float rtaDifPrecio;

	precioTotalAero = precioAero * kmtrs;
	precioTotalLatam = precioLatam * kmtrs;

	rtaDifPrecio = precioTotalLatam - precioTotalAero;

	return rtaDifPrecio;
}

void CargaForzada() {


	float x; // kmtrs
	float y;// precio Aerolineas
	float z;// precio Latam
	float rtaDescAero;
	float rtaDescLatam;
	float rtaInteresAero;
	float rtaInteresLatam;
	double rtaBtcAero;
	double rtaBtcLatam;
	float rtaPrecioUnitarioAero;
	float rtaPrecioUnitarioLatam;
	float rtaDifPrecio;


	x = 7090;
	y = 162965;
	z = 159339;


	//descuento tarjeta de debito
	rtaDescLatam = DescTarjetaDevitoLatam(z, x);
	rtaDescAero = DescTarjetaDevitoAero(y, x);
	//Interes Tarjeta de credito
	rtaInteresAero = InteresTCAero(y, x);
	rtaInteresLatam = InteresTCLatam(z, x);
	//Precio Btc
	rtaBtcLatam = ValorBitcoinLatam(z, x);
	rtaBtcAero = ValorBitcoinAero(y, x);
	//Precio Unitario
	rtaPrecioUnitarioLatam = PrecioKmtrsLatam(z, x);
	rtaPrecioUnitarioAero = PrecioKmtrsAero(y, x);
	//Diferencia
	rtaDifPrecio = DifPrecio(y, z, x);

	printf(" Kms Ingresado: %.5f \n\n", x);

	printf("Lam: \n");
	printf("a) Precio con tarjeta de debito: %c %.5f \n", 36 , rtaDescLatam);
	printf("b) Precio con tarjeta de crédito: %c %.5f \n",36 , rtaInteresLatam);
	printf("c) Precio pagando con bitcoin : %lf BTC\n", rtaBtcLatam);
	printf("d) Precio unitario: %c %f \n",36 , rtaPrecioUnitarioLatam);

	printf("Aerolineas: \n");
	printf("a) Precio con tarjeta de debito: %c %.5f \n",36 , rtaDescAero);
	printf("b) Precio con tarjeta de crédito: %c %.5f \n",36 , rtaInteresAero);
	printf("c) Precio pagando con bitcoin : %lf BTC\n", rtaBtcAero);
	printf("d) Precio unitario: %c %f \n",36 , rtaPrecioUnitarioAero);
	printf("\n-------------------------------------------\n");
	printf("La diferencia de precio es : %c %.5f",36 , rtaDifPrecio);


}

