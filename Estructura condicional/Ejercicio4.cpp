// 4) Pedir al usuario dos notas de exámenes. Si una de las dos o ambas son menores que 4, imprimir por pantalla “Al recuperatorio :(“. Si ambas son 4 o más, imprimir “Regularizaste la cursada :)”.

#include <iostream> 
using namespace std;

int main()
{
    float nota1;
    float nota2;

    cout << "Cuanto te sacastes en el primer examen? ";
    cin >> nota1;

    cout << "Cuanto te sacastes en el segundo examen? ";
    cin >> nota2;

    if (nota1 >= 4 || nota2 >= 4) {
        cout << "Regularizaste la cursada :) ";

    }else{
        cout << "Al recuperatorio :( ";
    }
    return 0;
}
