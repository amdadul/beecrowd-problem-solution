#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    char NAME[30];
    double SALARY,SALE,TOTAL,BONUS;
    std::cin >>NAME>>SALARY>>SALE;
    BONUS = (SALE*15)/100;
    TOTAL = SALARY + BONUS;
    std::cout<<"TOTAL = R$ "<<std::fixed<<std::setprecision(2)<<TOTAL<<"\n";
    return 0;
}

