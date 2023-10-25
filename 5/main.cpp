
#include <iostream>

using namespace std;

int main()
{
    double cel; 
    cout<<"Temperatura em graus Celsius: ";
    cin>> cel; 
    double fah = (9 * cel + 160) / 5;
    cout << "Temperatura em Fahrenheit: " << fah;
    

    return 0;
}