
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int N,H,M,S,R;
    std::cin>> N;
    H = N/3600;
    R = N%3600;
    M = R/60;
    R = R%60;
    S = R;

    std::cout<<H<<":"<<M<<":"<<S<<"\n";
    return 0;
}
