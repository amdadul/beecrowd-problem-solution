#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int X, Y;
    double P[6], R;
    P[1]= 4.00;
    P[2] = 4.50;
    P[3] = 5.00;
    P[4] = 2.00;
    P[5] = 1.50;

    std::cin>> X >>Y;

    R = P[X]*Y;
    std::cout<<"Total: R$ "<<std::fixed<<std::setprecision(2)<<R<<"\n";

    return 0;
}
