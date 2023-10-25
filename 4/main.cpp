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
   double HT; 
   double VH; 
   double PD; 
   
   cout<< "Horas trabalhadas: ";
   cin>> HT; 
   cout<< "Valor da hora: ";
   cin>> VH; 
   cout<< "Persentual de desconto: ";
   cin>> PD; 
   
   double SB = HT * VH; 
   double TD = (PD/100)*SB; 
   double SL = SB - TD; 
   
   cout<< "Salario bruto: " << SB <<"\n"; 
   cout<< "Total de desconto: " << TD <<"\n"; 
   cout<< "Salario Líquido: " << SL <<"\n"; 
   

    return 0;
}