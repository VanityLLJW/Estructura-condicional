
// 2 pedir al usuario un número. Si el número es par, mostrar en pantalla “Es un número par”, de lo contrario, mostrar “Es un número impar”.

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int par;



    cout << "Ingrese numero ";
    cin >> par;


    if (par % 2 == 0) {
        cout << "El numero es par \n";

    }
    else if (par) {
        cout << "El numero el numero es impar \n";

    }

    return 0;

}
