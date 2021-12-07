#include<iostream>
#include <iomanip>
#include <iterator>

using namespace std;

int main()
{
    int n[20],i,j, k=0,a[5];
    bool next = true;
    for(i=0;i<5;i++)
    {
        cin>>n[i];
    }

    for(j=0;j<5;j++)
    {
        if(n[j]==42)
        {
            break;
        }
        else
        {
            cout<<n[j]<<"\n";
        }
    }
    return 0;
}
