#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    float A, B;
    double MEDIA;
    std::cin>> A >> B;
    MEDIA = ((A*3.5)+(B*7.5))/(3.5+7.5);
    std::cout<<"MEDIA = "<<std::fixed<<std::setprecision(5)<<MEDIA<<"\n";
    return 0;
}
