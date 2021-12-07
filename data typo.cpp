#include<iostream>
#include <iomanip>
#include<string>

using namespace std;

int main()
{
    int i = 4,j,sum;
    double d = 4.0,e,sum1;
    string s = "HackerRank ",t,sum2;
    cin>> j;
    cin>> e;
    cin.ignore();
    getline(cin,t);
    sum = i+j;
    sum1 = d+e;
    sum2 = s+t;
    std::cout<<sum<<"\n";
    std::cout<<std::fixed<<std::setprecision(1)<<sum1<<"\n";
    std::cout<<sum2<<"\n";
    return 0;
}
