#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int X=60,Y=90,M=60,D,N,RESULT;
    D = M/(Y-X);
    std::cin>> N;
    RESULT = N*D;
    std::cout<<RESULT<<" minutos"<<"\n";
    return 0;
}
