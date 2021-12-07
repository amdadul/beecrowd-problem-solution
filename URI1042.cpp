#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int s[7], i=0,j=0,temp;
    s[3]=999999999;
    for(i=0;i<3;i++)
    {
        std::cin>> s[i];
        s[i+4] = s[i];
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            if(s[i+1]<s[i])
            {
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        std::cout<<s[i]<<"\n";
    }
    std::cout<<"\n";
    for(i=4;i<7;i++)
    {
        std::cout<<s[i]<<"\n";
    }
    return 0;
}
