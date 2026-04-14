// 10) Pedir al usuario que ingrese el modelo de dos autos, y cuál es la velocidad máxima de cada uno. Imprimir por pantalla sólamente el más rápido de los dos.
//

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);


    int auto1;
    int auto2;

    char modelo1[30];
    char modelo2[30];

    cout << "Ingrese el modelo del auto uno: ";
    cin >> modelo1;

    cout << "Ingrese la velocidad del auto uno: ";
    cin >> auto1;

    cout << "Ingrese el modelo de auto dos: ";
    cin >> modelo2;

    cout << "Ingrese la velocida del auto dos: ";
    cin >> auto2;

    if (auto1 > auto2) {
        cout << "El auto mas rapido es el auto un: " << modelo1;

    }

    else if (auto2 > auto1){ 
        cout << "El auto mas rapido es el auto dos: " << modelo2;

    }

    return 0;
    
}

