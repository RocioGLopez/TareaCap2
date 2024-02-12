#include <iostream>

using namespace std;
//2.16 (Aritmética) Escriba un programa que pida al usuario que escriba dos números, obtenga esos dos números
//del usuario e imprima la suma, producto, diferencia y cociente de los dos números.

int main() {
    // declaracion de variables
    int numero1, numero2;
    //se pediran los valores para las variables anteriores
    cout << "Ingresa el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    // Calcular e imprimir  suma, producto, diferencia y cociente
    cout << "La es Suma: " << numero1 + numero2 << endl;
    cout << "La multiplicacion es: " << numero1 * numero2 << endl;
    cout << "Diferencia: " << numero1 - numero2 << endl;
    //verificar si el denominador es 0
    if (numero2 != 0) {
        cout << "El cociente: " << numero1 / numero2 << endl;
    } else {
        cout << "No se puede dividir por cero." << endl;
    }

    return 0;
}
