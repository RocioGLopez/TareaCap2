#include <iostream>

using namespace std;
/*2.24 (Impar o par) Escriba un programa que lea un entero, determine e imprima si es impar o par. [Sugerencia:
use el operador módulo. Un número par es un múltiplo de dos. Cualquier múltiplo de dos deja un residuo de cero
cuando se divide entre 2].*/

int main()
{
    //declaracion de variable entera
    int num;
    //ingreso de un entero ingresado por user
    cout<<"INGRESE UN ENTERO: ";
    cin>>num;

    //uso de if para saber si es impar o par el numero ingresado
    if (num % 2==0){
        cout << num << " es un numero par."<< endl;

    }else{
         cout << num << " es un numero impar."<< endl;
    }




    return 0;
}
