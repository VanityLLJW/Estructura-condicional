// 4) Pedir al usuario que ingrese su nombre. Mostrar en pantalla el nombre exactamente así: “¡Hola, [Nombre]!” (obviamente sin los corchetes).


#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	string nombre;

	cout << "Ingrese su nombre Porfavor: ";
	cin >> nombre;

	cout << "¡Hola, " << nombre << "!";	
}
