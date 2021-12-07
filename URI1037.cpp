#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double A, B=25.00000, C=50.0000000, D=75.0000000;
    std::cin>> A;
    if(A>=0 && A<=100)
    {
        if(A>=0 && A<=B)
        {
            std::cout<<"Intervalo [0,25]"<<"\n";
        }
        if(A>B && A<=C)
        {
            std::cout<<"Intervalo (25,50]"<<"\n";
        }
        if(A>C && A<=D)
        {
            std::cout<<"Intervalo (50,75]"<<"\n";
        }
        if(A>D && A<=100.00000)
        {
            std::cout<<"Intervalo (75,100]"<<"\n";
        }
    }
    else
    {
        std::cout<<"Fora de intervalo"<<"\n";
    }

    return 0;
}


