#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,result;
    std::cin>> n;
    if(n%2==0)
    {
        if(n>=2 && n<=5)
        {
            std::cout<<"Not Weird"<<"\n";
        }
        else if(n>=6 && n<=20)
        {
            std::cout<<"Weird"<<"\n";
        }
        else
        {
            std::cout<<"Not Weird"<<"\n";
        }

    }
    else
    {
        std::cout<<"Weird"<<"\n";
    }
    return 0;
}


