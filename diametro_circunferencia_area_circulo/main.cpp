#include <iostream>

using namespace std;
/*2.20 (Di�metro, circunferencia y �rea de un c�rculo) Escriba un programa que lea el radio de un c�rculo como
un entero e imprima el di�metro del c�rculo, la circunferencia y el �rea. Use el valor constante 3.14159 para p.
Realice todos los c�lculos en instrucciones de salida. [Nota: en este cap�tulo s�lo hemos visto constantes y variables
tipo entero. En el cap�tulo 4 hablaremos sobre los n�meros de punto flotante; es decir, valores que pueden tener
puntos decimales].*/

int main()
{
    //declaracion de variable entera del radio
    int radio;
    const double PI = 3.14159;


    cout << "Ingrese el radio del circulo en entero: ";
    cin >> radio;

    // se calculara el di�metro, la circunferencia y el �rea
    int diametro = 2 * radio;
    double circunferencia = 2 * PI * radio;
    double area = PI * radio * radio;

    // resultados en pantalla
    cout << "Diametro del circulo: " << diametro <<endl;
    cout << "Circunferencia del circulo: " << circunferencia <<endl;
    cout << "Area del circulo: " << area <<endl;






    return 0;
}
