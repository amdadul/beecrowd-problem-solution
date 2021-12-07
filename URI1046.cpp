#include<iostream>

using namespace std;

int main()
{
    int B,E,HOUR;
    cin>>B>>E;

    if(B>=E)
    {
        E+=24;
        HOUR = E-B;
        cout<<"O JOGO DUROU "<<HOUR<<" HORA(S)\n";
    }
    else
    {
        HOUR = E-B;
        cout<<"O JOGO DUROU "<<HOUR<<" HORA(S)\n";
    }


    return 0;
}

