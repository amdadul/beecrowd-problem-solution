#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n =3.14159;
    double R, A;
    std::cin >>R;
    A = n*(R*R);
    std::cout<<"A="<<std::fixed<<std::setprecision(4)<<A<<"\n";
    return 0;
}
