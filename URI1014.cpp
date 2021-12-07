
#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X;
    double Y,RESULT;
    std::cin>> X >> Y;
    RESULT = X/Y;
    std::cout<<std::fixed<<std::setprecision(3)<<RESULT<<" km/l"<<"\n";
    return 0;
}
