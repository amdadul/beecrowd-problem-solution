#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[101];
    int a,b,c,pass=0;
    while(scanf("%s",s)!=EOF)
    {
    for(int i=0;i<101;i++)
    {
        if(s[i]>=65 && s[i] <=90 )
        {
            a=1;
        }
        if(s[i]>=97 && s[i] <=122 )
        {
            b=1;
        }
        if(s[i]>=48 && s[i] <=57 )
        {
            c=1;
        }
        if(a==1 && b==1 && c==1)
        {
            pass++;
            a=0;
            b=0;
            c=0;
        }
    }
    cout<<pass;
    }
    return 0;
}
