#include <iostream>

using namespace std;
/*2.20 (Diámetro, circunferencia y área de un círculo) Escriba un programa que lea el radio de un círculo como
un entero e imprima el diámetro del círculo, la circunferencia y el área. Use el valor constante 3.14159 para p.
Realice todos los cálculos en instrucciones de salida. [Nota: en este capítulo sólo hemos visto constantes y variables
tipo entero. En el capítulo 4 hablaremos sobre los números de punto flotante; es decir, valores que pueden tener
puntos decimales].*/

int main()
{
    //declaracion de variable entera del radio
    int radio;
    const double PI = 3.14159;


    cout << "Ingrese el radio del circulo en entero: ";
    cin >> radio;

    // se calculara el diámetro, la circunferencia y el área
    int diametro = 2 * radio;
    double circunferencia = 2 * PI * radio;
    double area = PI * radio * radio;

    // resultados en pantalla
    cout << "Diametro del circulo: " << diametro <<endl;
    cout << "Circunferencia del circulo: " << circunferencia <<endl;
    cout << "Area del circulo: " << area <<endl;






    return 0;
}
