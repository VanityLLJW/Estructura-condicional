// Pedir al usuario dos números y un operador aritmético (+, -, *, /) -> (1, 2, 3, 4). De acuerdo al operador aritmético elegido, realizar la operación correspondiente y mostrar el resultado en pantalla.
//

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int numero1;
    int numero2;

    char cara;

    cout << "Ingrese un numero: ";
    cin >> numero1; 

    cout << "Ingrese un operador aritmético: ";
    cin >> cara;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;


    if (cara == '+') {
        cout <<"Resultado: " << numero1 + numero2;
    } 

    else if (cara == '-') {
        cout << "Resultado: " << numero1 - numero2;
    }

    else if (cara == '/') {
        cout << "Resultado: " << numero1 / numero2;
    }
     
    else if (cara == '*') {
        cout << "Resultado: " << numero1 * numero2; 

    }

    return 0;
    
}