#include <iostream>
using namespace std;

int main() {
    int a, b; 
    cout << "Digite o valor de A: ";
    cin >> a; 
    cout << "Digite o valor de B: ";
    cin >> b; 
    
    int quociente = a / b; 
    int resto = a % b; 
    
    cout << "quociente de a por b: " << quociente << "\n"; 
    cout << "resto da divisão de a por b: " << resto << "\n"; 

    return 0;
}
