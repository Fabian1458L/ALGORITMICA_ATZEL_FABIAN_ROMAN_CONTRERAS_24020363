#include <iostream>

using namespace std;

int main() {
    int a, edad;
    char nombre[20];

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Introduzca su a�o de nacimiento: ";
    cin >> a;

    edad = 2024 - a;

    cout << "Hola " << nombre << ", tu edad es " << edad << " a�os." << endl;

    return 0;
}
