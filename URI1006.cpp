#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    float A, B, C;
    double MEDIA;
    std::cin>> A >> B >> C;
    MEDIA = ((A*2)+(B*3)+(C*5))/(2+3+5);
    std::cout<<"MEDIA = "<<std::fixed<<std::setprecision(1)<<MEDIA<<"\n";
    return 0;
}

