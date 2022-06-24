/*
Ejercicio 2: Escribe un programa que lea de la entrada estándar
el precio de un producto y muestre en la salida estándar el precio
del producto al aplicarle el IVA.
*/

#include <iostream>;

using namespace std;


int main()
{
	float precio, IVA;
	float total = 0;

	cout << "Introduzca el precio del producto: \n";
	cin >> precio;
	cout << "Introduzca el porcentaje IVA que quiere aplicar: %";
	cin >> IVA;

	IVA = IVA / 100;
	IVA = IVA * precio;
	total = precio + IVA;


	cout << "El precio total a pagar mas el IVA es: \n" << total;

	return 0;
}