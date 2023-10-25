
#include <iostream>

using namespace std;

int main()
{    
    


string  nome; 
string  sobrenome; 
cout<< "nome: ";
cin>> nome; 
cout<< "sobrenome: "; 
cin>> sobrenome; 


string  nomeCompleto = nome.append(" ").append(sobrenome); 
cout<< nomeCompleto; 

    return 0;
}