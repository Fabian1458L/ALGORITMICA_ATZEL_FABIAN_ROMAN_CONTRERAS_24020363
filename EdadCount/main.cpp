#include <iostream>

using namespace std;

int main() {
    int a, edad;
    char nombre[20];

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Introduzca su año de nacimiento: ";
    cin >> a;

    edad = 2024 - a;

    cout << "Hola " << nombre << ", tu edad es " << edad << " años." << endl;

    return 0;
}
