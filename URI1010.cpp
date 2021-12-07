#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int A1, A2, B1,B2;
    float A3,B3,ATP;
    std::cin>> A1 >> A2 >> A3;
    std::cin>> B1 >> B2 >> B3;
    ATP = (A2*A3)+(B2*B3);
    std::cout<<"VALOR A PAGAR: R$ "<<std::fixed<<std::setprecision(2)<<ATP<<"\n";
    return 0;
}

