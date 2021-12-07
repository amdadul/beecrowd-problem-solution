#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    double R, pi=3.14159,VOLUME;
    std::cin>> R;
    VOLUME = (4.0/3)*pi*(R*R*R);
    std::cout<<"VOLUME = "<<std::fixed<<std::setprecision(3)<<VOLUME<<"\n";
    return 0;
}


