
// Pedir al usuario que ingrese su edad. Si es mayor o igual a 16 años, imprimí en pantalla: ¡¡Ya podes tener tu licencia de manejar!!
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int edad;


    cout << "Ingrsa Tu edad: ";
    cin >> edad;

    if (edad > 15) {
        cout << "Eres mayor ¡¡Ya podes tener tu licencia de manejar!!" << endl;

    }else if (edad < 16) {
        cout << "Eres un niño No podes tener tu licencia de manejar" << endl;

    }
    return 0;

}
