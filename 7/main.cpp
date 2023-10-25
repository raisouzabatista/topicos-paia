
#include <iostream>

using namespace std;

int main()
{
    double raio;
    double altura; 
    cout<<"Digite o raio da lata: ";
    cin>> raio; 
    cout<<"Digite a altura da lata: "; 
    cin>> altura; 
    
    double volume = 3.14159 *raio*raio *altura;
    
    cout<<"O volume da lata deu: " << volume; 

    return 0;
}