#include <iostream>
using namespace std;

int main() {
    double fahrenheit; 
    
    cout << "Temperatura em graus Fahrenheit: ";
    cin >> fahrenheit; 
    
    double Celsius = (fahrenheit - 32) * (5.0 / 9.0); 
    
    cout << "Temperatura em graus Celsius: " << Celsius ;

    return 0;
}
