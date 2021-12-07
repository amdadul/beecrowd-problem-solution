#include<iostream>

using namespace std;

int main()
{
    int B,BM,E,EM,HOUR,MIN;
    cin>>B>>BM>>E>>EM;

    if(B>=E)
    {
        if(BM>EM || (BM>EM && B==E))
        {
            EM+=60;
            E+=23;
            HOUR = E-B;
            MIN = EM-BM;
            cout<<"O JOGO DUROU "<<HOUR<<" HORA(S) E "<<MIN<<" MINUTO(S)\n";
        }
        else if(B==E && EM>BM)
        {
            HOUR = E-B;
            MIN = EM-BM;
            cout<<"O JOGO DUROU "<<HOUR<<" HORA(S) E "<<MIN<<" MINUTO(S)\n";
        }
        else
        {
            E+=24;
            HOUR = E-B;
            MIN = EM-BM;
            cout<<"O JOGO DUROU "<<HOUR<<" HORA(S) E "<<MIN<<" MINUTO(S)\n";
        }

    }
    else
    {
        if(BM>EM)
        {
            EM+=60;
            E-=1;
            HOUR = E-B;
            MIN = EM-BM;
            cout<<"O JOGO DUROU "<<HOUR<<" HORA(S) E "<<MIN<<" MINUTO(S)\n";
        }
        else
        {
            HOUR = E-B;
            MIN = EM-BM;
            cout<<"O JOGO DUROU "<<HOUR<<" HORA(S) E "<<MIN<<" MINUTO(S)\n";
        }
    }


    return 0;
}


