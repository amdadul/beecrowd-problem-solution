
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int A, B, C, D,SUMAB,SUMCD;
    std::cin>> A >> B >> C >> D;
    SUMAB = A+B;
    SUMCD = C+D;
    if(B>C && D>A)
    {
        if(SUMCD>SUMAB)
        {
            if(C>=0 && D>=0)
            {
                if(A%2==0)
                {
                    std::cout<<"Valores aceitos"<<"\n";
                }
                else
                {
                    std::cout<<"Valores nao aceitos"<<"\n";
                }
            }
            else
            {
                std::cout<<"Valores nao aceitos"<<"\n";
            }
        }
        else
        {
            std::cout<<"Valores nao aceitos"<<"\n";
        }
    }
    else
    {
        std::cout<<"Valores nao aceitos"<<"\n";
    }

    return 0;
}

