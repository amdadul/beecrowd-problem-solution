#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int H, S;
    double RESULT, M=12.0;
    std::cin>> H >> S;
    RESULT = (H*S)/M;
    std::cout<<std::fixed<<std::setprecision(3)<<RESULT<<"\n";
    return 0;
}

