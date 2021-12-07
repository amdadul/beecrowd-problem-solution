#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int A,h,f,t,tn,fv,tw,o,R;
    std::cin>> A;
    h = A/100;
    R = A%100;
    f = R/50;
    R = R%50;
    t = R/20;
    R = R%20;
    tn = R/10;
    R = R%10;
    fv = R/5;
    R = R%5;
    tw = R/2;
    R = R%2;
    o = R/1;

    std::cout<<A<<"\n";
    std::cout<<h<<" nota(s) de R$ 100,00"<<"\n";
    std::cout<<f<<" nota(s) de R$ 50,00"<<"\n";
    std::cout<<t<<" nota(s) de R$ 20,00"<<"\n";
    std::cout<<tn<<" nota(s) de R$ 10,00"<<"\n";
    std::cout<<fv<<" nota(s) de R$ 5,00"<<"\n";
    std::cout<<tw<<" nota(s) de R$ 2,00"<<"\n";
    std::cout<<o<<" nota(s) de R$ 1,00"<<"\n";
    return 0;
}
