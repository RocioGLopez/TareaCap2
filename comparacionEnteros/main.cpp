#include <iostream>

using namespace std;

/*2.18 (Comparaci�n de enteros) Escriba un programa que pida al usuario que escriba dos enteros, obtenga los
n�meros del usuario y luego imprima el n�mero m�s grande, seguido de las palabras "es m�s grande". Si los n�meros
son iguales, imprima el mensaje "Estos numeros son iguales".
**/
int main()
{
    //declaracion de variables enteras
    int num1=0;
    int num2=0;

    //pedir al user que ingrese numeros enteros
    cout<< "INGRESE UN NUMERO ENTERO CUALQUIERA: ";
    cin>> num1;
    cout<< "INGRESE UN SEGUNDO NUMERO ENTERO CUALQUIERA: ";
    cin>> num2;

    if (num1> num2)
        cout<<"EL NUMERO: "<< num1<< "es el mayor"<<endl;;

    if (num2> num1)
        cout<<"EL numero: "<<num2<<"es el mayor"<<endl;;

    if (num1 == num2)
        cout<<"SON VALORES IGUALES"<<endl;;






    return 0;
}
