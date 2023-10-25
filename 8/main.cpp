/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    double tempo; 
    double vm;
    cout<<"Tempo de viagem em horas: ";
    cin>> tempo; 
    cout<< "Velocidade média da viagem em km/h: "; 
    cin>> vm; 
    double distancia = tempo* vm; 
    double litros  = distancia / 12; 
    cout<< "Tempo de viagem: "<< tempo << "\n"; 
    cout<< "Velocidade média da viagem: "<< vm << "\n"; 
    cout<< "Distancia percorrida na viagem: "<< distancia << "\n"; 
    cout<< "Litros de gasolina gastos na viagem: "<< litros << "\n"; 



    return 0;
}