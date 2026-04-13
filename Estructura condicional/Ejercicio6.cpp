// 6) Pedir al usuario cuánto dinero tiene, y cuánto cuesta un artículo. Si tiene suficiente dinero, imprimí “Podés comprarlo”, sino mostrar “No tenés suficiente dinero”.
//

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int dinero;
    int articulo;

    cout << "Ingrese el dinero: ";
    cin >> dinero;

    cout << "Ingrese el valor del articulo: ";
    cin >> articulo;

    if (dinero > articulo) {
        cout << "Podés comprarlo "; 

    }else if (dinero < articulo) {
        cout << "No tenés suficiente dinero ";
    }

    return 0;
    
}

