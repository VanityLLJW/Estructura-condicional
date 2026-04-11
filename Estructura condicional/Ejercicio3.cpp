// 3) Pedir al usuario dos números e imprimir en pantalla cuál es mayor. Si los dos son iguales, imprimir en pantalla “¡Ingresaste dos números iguales!”


#include <iostream>
#include <windows.h>
using namespace std;
int main()

{
	SetConsoleOutputCP(CP_UTF8);

	int numero1;
	int numero2;

	cout << "Ingrese el primer numero ";
	cin >> numero1;

	cout << "Ingrese el segundo numero ";
	cin >> numero2;


	if (numero1 > numero2 ) {
		cout <<  "El numero " << numero1 << " es mayor \n";
	}

	else if (numero2 > numero1) {
		cout << "El numero " << numero2 << " es mayor \n";

	}

		
	else if (numero1 == numero2) {
		cout << "¡Ingresaste dos números iguales! \n";

	}


		return (0);
   
}