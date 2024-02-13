#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese un entero de cinco digitos: ";
    cin >> num;

    // Separando los dígitos
    int dig1 = num / 10000;
    int dig2 = (num % 10000) / 1000;
    int dig3 = (num % 1000) / 100;
    int dig4 = (num % 100) / 10;
    int dig5 = num % 10;

    // Imprimir los dígitos separados por tres espacios
    cout << "El numero separado es: "<<dig1 << "   " << dig2 << "   " << dig3 << "   " << dig4 << "   " << dig5 << endl;

    return 0;
}
