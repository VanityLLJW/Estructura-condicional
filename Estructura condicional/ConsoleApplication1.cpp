// Pedir al usuario que ingrese un año. Si el año es bisiesto, imprimir en pantalla “El año [año] es bisiesto.”. Si no lo es, imprimí “El año [año] no es bisiesto.”.


#include <iostream>
using namespace std;
int main()
{
    int ingrese;
    

    cout << "Ingrese el año: ";
    cin >> ingrese; 
    
   if ((ingrese % 4 == 0) && (ingrese % 100 != 0 || ingrese % 400 == 0)) {
        cout << "El año " << ingrese << " es biciesto ";
    }else{
        cout << "El año " << ingrese << " no es biciesto ";
    }
    return 0;
}


