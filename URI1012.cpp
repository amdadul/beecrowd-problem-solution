
#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, B, C, pi=3.14159,TA,CA,TRA,QA,RA;
    std::cin>> A >> B >> C;
    TA = 0.5*(A*C);
    CA = pi*(C*C);
    TRA = 0.5*(A+B)*C;
    QA = B*B;
    RA = A*B;
    std::cout<<"TRIANGULO: "<<std::fixed<<std::setprecision(3)<<TA<<"\n";
    std::cout<<"CIRCULO: "<<std::fixed<<std::setprecision(3)<<CA<<"\n";
    std::cout<<"TRAPEZIO: "<<std::fixed<<std::setprecision(3)<<TRA<<"\n";
    std::cout<<"QUADRADO: "<<std::fixed<<std::setprecision(3)<<QA<<"\n";
    std::cout<<"RETANGULO: "<<std::fixed<<std::setprecision(3)<<RA<<"\n";
    return 0;
}


