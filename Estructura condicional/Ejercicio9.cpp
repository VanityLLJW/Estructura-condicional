// 9) Pedir al usuario en qué mes está (1 al 12). Si es 1, 2, ó 3, imprimir “Es verano”.
// Si es 4, 5 ó 6, imprimir “Es otoño”. Si es 7, 8, ó 9, imprimir “Es invierno”. Si es 10, 11, ó 12, imprimir “Es primavera”.


#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int mes;

    cout << "Ingresar en el mes en el que estes: ";
    cin >> mes;

    if (mes >= 1 && mes <= 3) {
        cout << "Es Verano ";

    }

    else if (mes >= 4 && mes <= 6) {
        cout << "Es Otoño ";

    }

    else if (mes >= 7 && mes <= 9) {
        cout << "Es Invierno ";

    }

    else if (mes >= 10 && mes <= 12) {
        cout << "Es primavera ";

    }
    else{
        cout << "El numero es incorrecto porfavor ingrese un numero del 1 al 12 ";

}

    return 0;

}

