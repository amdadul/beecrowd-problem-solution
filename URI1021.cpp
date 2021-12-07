
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int h,f,t,tn,fv,tw,o,c1,c2,c3,c4,c5,AX,R,AX1;
    double A;
    std::cin>> A;
    AX = A*100;
    AX1 = A;
    h = AX1/100;
    R = AX1%100;
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
    R=AX;
    R =R%100;
    c1 = R/50;
    R = R%50;
    c2 = R/25;
    R = R%25;
    c3 = R/10;
    R = R%10;
    c4 = R/05;
    R = R%5;
    c5 = R/1;

    std::cout<<"NOTAS:"<<"\n";
    std::cout<<h<<" nota(s) de R$ 100.00"<<"\n";
    std::cout<<f<<" nota(s) de R$ 50.00"<<"\n";
    std::cout<<t<<" nota(s) de R$ 20.00"<<"\n";
    std::cout<<tn<<" nota(s) de R$ 10.00"<<"\n";
    std::cout<<fv<<" nota(s) de R$ 5.00"<<"\n";
    std::cout<<tw<<" nota(s) de R$ 2.00"<<"\n";
    std::cout<<"MOEDAS:"<<"\n";
    std::cout<<o<<" moeda(s) de R$ 1.00"<<"\n";
    std::cout<<c1<<" moeda(s) de R$ 0.50"<<"\n";
    std::cout<<c2<<" moeda(s) de R$ 0.25"<<"\n";
    std::cout<<c3<<" moeda(s) de R$ 0.10"<<"\n";
    std::cout<<c4<<" moeda(s) de R$ 0.05"<<"\n";
    std::cout<<c5<<" moeda(s) de R$ 0.01"<<"\n";
    return 0;
}
