

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double A, B, C, D,E,x1,x2;
    std::cin>> A >> B >> C;
    D = (B*B)-4*A*C;
    E = 2*A;

    if(D>=0 && E!=0)
    {
        x1 = (-B+sqrt(D))/E;
        x2 = (-B-sqrt(D))/E;

        std::cout<<"R1 = "<<std::fixed<<std::setprecision(5)<<x1<<"\n";
        std::cout<<"R2 = "<<std::fixed<<std::setprecision(5)<<x2<<"\n";
    }
    else
    {
        std::cout<<"Impossivel calcular"<<"\n";
    }

    return 0;
}

