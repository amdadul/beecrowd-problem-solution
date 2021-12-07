#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i,n,result;
    std::cin>> n;
    for(i=1;i<=10;i++)
    {
        result = n*i;
        std::cout<<n<<" x "<<i<<" = "<<result<<"\n";
    }
    return 0;
}

