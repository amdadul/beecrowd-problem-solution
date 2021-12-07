
#include<iostream>
#include <cmath>

using namespace std;

int main()
{
    int A, B, C,MainorAB,MainorABC;
    std::cin>> A >> B >> C;
    MainorAB = (A+B+abs(A-B))/2;
    MainorABC = (MainorAB+C+abs(MainorAB-C))/2;
    std::cout<<MainorABC<<" eh o maior"<<"\n";
    return 0;
}
