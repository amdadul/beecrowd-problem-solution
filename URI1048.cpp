#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    double S,NS,IN;
    cin>>S;
    if(S>=0 && S<=400.00)
    {
        NS = S*1.15;
        IN = NS - S;
        std::cout<<"Novo salario: "<<std::fixed<<std::setprecision(2)<<NS<<"\n";
        std::cout<<"Reajuste ganho: "<<std::fixed<<std::setprecision(2)<<IN<<"\n";
        std::cout<<"Em percentual: 15 %\n";
    }
    else if(S>400.00 && S<=800.00)
    {
        NS = S*1.12;
        IN = NS - S;
        std::cout<<"Novo salario: "<<std::fixed<<std::setprecision(2)<<NS<<"\n";
        std::cout<<"Reajuste ganho: "<<std::fixed<<std::setprecision(2)<<IN<<"\n";
        std::cout<<"Em percentual: 12 %\n";
    }
    else if(S>800.00 && S<=1200.00)
    {
        NS = S*1.10;
        IN = NS - S;
        std::cout<<"Novo salario: "<<std::fixed<<std::setprecision(2)<<NS<<"\n";
        std::cout<<"Reajuste ganho: "<<std::fixed<<std::setprecision(2)<<IN<<"\n";
        std::cout<<"Em percentual: 10 %\n";
    }
    else if(S>1200.00 && S<=2000.00)
    {
        NS = S*1.07;
        IN = NS - S;
        std::cout<<"Novo salario: "<<std::fixed<<std::setprecision(2)<<NS<<"\n";
        std::cout<<"Reajuste ganho: "<<std::fixed<<std::setprecision(2)<<IN<<"\n";
        std::cout<<"Em percentual: 7 %\n";
    }
    else
    {
        NS = S*1.04;
        IN = NS - S;
        std::cout<<"Novo salario: "<<std::fixed<<std::setprecision(2)<<NS<<"\n";
        std::cout<<"Reajuste ganho: "<<std::fixed<<std::setprecision(2)<<IN<<"\n";
        std::cout<<"Em percentual: 4 %\n";
    }

    return 0;
}
