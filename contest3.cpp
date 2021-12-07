#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i,A[10000],n;
    std::cin>> n;
    for(i=1;i<=n;i++)
    {
        std::cin>>A[i];
    }
    for(i=n;i>=1;i--)
    {
        std::cout<<A[i]<<" ";
    }
    std::cout<<"\n";
    return 0;
}


