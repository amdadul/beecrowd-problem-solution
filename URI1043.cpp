
#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, B, C, tri,tro;
    std::cin>> A >> B >> C;
    if((A+B)>C && (B+C)>A && (A+C)>B)
    {
        tri = A + B + C;
        std::cout<<"Perimetro = "<<std::fixed<<std::setprecision(1)<<tri<<"\n";
    }
    else
    {
        tro = ((A+B)/2)*C;
        std::cout<<"Area = "<<std::fixed<<std::setprecision(1)<<tro<<"\n";
    }
    return 0;
}
