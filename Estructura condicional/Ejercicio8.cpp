// 7) Pedir al usuario un número del 1 al 7. Por cada número, imprimir qué día de la semana es (1: lunes, 2: martes, y así).


#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	int dias;

	cout << "Ingrese un número del 1 al 7: ";
	cin >> dias;

	if (dias == 1)
		cout << "lunes";

	else if (dias == 2){
		cout << "martes";
	}

  else if (dias == 3){
		cout << "miercoles";
	}
  else if (dias == 4){
		cout << "jueves";
	}
  else if (dias == 5) {
		cout << "Viernes";
	} 
	else if (dias == 6){
		cout << "Sabado";
	}
	else if (dias == 7){
		cout << "Sabado";
	}
	else{
		cout << "Numero invalido tiene que ser un numero del 1 al 7";
	}
	return 0;
}
