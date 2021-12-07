
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int N,Y,M,D,R;
    std::cin>> N;
    Y = N/365;
    R = N%365;
    M = R/30;
    R = R%30;
    D = R;

    std::cout<<Y<<" ano(s)"<<"\n";
    std::cout<<M<<" mes(es)"<<"\n";
    std::cout<<D<<" dia(s)"<<"\n";
    return 0;
}
