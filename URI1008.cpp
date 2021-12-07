#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int NUMBER, HOUR;
    float RATE,SALARY;
    std::cin >>NUMBER>>HOUR>>RATE;
    SALARY = HOUR*RATE;
    std::cout<<"NUMBER = "<<NUMBER<<"\n";
    std::cout<<"SALARY = U$ "<<std::fixed<<std::setprecision(2)<<SALARY<<"\n";
    return 0;
}

