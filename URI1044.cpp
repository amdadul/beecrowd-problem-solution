#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int A, B, temp;
    std::cin>> A >> B;
    if(B < A){
         temp = B;
         B = A;
         A = temp;
    }
    if(B%A==0)
    {
        std::cout<<"Sao Multiplos\n";
    }
    else
    {
        std::cout<<"Nao sao Multiplos\n";
    }

    return 0;
}
