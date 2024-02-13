#include <iostream>

using namespace std;

int main()
{
    double libras;
    double altura;

    cout << "Ingrese su peso en libras: ";
    cin >> libras;

    cout << "Ingrese su altura en pulgadas: ";
    cin >> altura;


    double bmi= (libras*703)/(altura*altura);
    cout<<"Tu peso BMI es: " << bmi<< endl;

    cout<<"\n VALORES DE BMI"<< endl;
    cout<<"Bajo peso: menos de 18.5" << endl;
    cout<<"Normal: entre 18.5 y 24.9" << endl;
    cout<<"Normal: entre 25 y 29.9" << endl;
    cout<<"Obeso: 30 o mas" << endl;


    return 0;
}
