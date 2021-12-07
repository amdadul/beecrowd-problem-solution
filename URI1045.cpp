#include<iostream>

using namespace std;

int main()
{
    double A,B,C,D,E,F;
    cin>>D>>E>>F;
    if(D>=E)
    {
        if(D>=F)
        {
            A = D;
            B = E;
            C = F;
        }
        else
        {
            A = F;
            B = E;
            C = D;
        }
    }
    else if(E>=D)
    {
        if(E>=F)
        {
            A = E;
            B = D;
            C = F;
        }
        else
        {
            A = F;
            B = E;
            C = D;
        }
    }
    else
    {
        A = F;
        B = E;
        C = D;
    }


    if((A==B && B==C) || (B==C && C==A) || (C==A && A==B))
    {
        if(A >= B + C)
        {
            cout<<"NAO FORMA TRIANGULO\n";
        }
        else if((A*A) == ((B*B) + (C*C)))
        {
            cout<<"TRIANGULO RETANGULO\n";
        }
        else if((A*A) > ((B*B) + (C*C)))
        {
            cout<<"TRIANGULO OBTUSANGULO\n";
        }
        else if((A*A) < ((B*B) + (C*C)))
        {
            cout<<"TRIANGULO ACUTANGULO\n";
        }
        else{}

        cout<<"TRIANGULO EQUILATERO\n";

    }
    else if(A==B || B==C || C==A)
    {
        if(A >= B + C)
        {
            cout<<"NAO FORMA TRIANGULO\n";
        }
        else if((A*A) == ((B*B) + (C*C)))
        {
            cout<<"TRIANGULO RETANGULO\n";
        }
        else if((A*A) > ((B*B) + (C*C)))
        {
            cout<<"TRIANGULO OBTUSANGULO\n";
        }
        else if((A*A) < ((B*B) + (C*C)))
        {
            cout<<"TRIANGULO ACUTANGULO\n";
        }
        else{}

        cout<<"TRIANGULO ISOSCELES\n";
    }
    else
    {
        if(A >= B + C)
        {
            cout<<"NAO FORMA TRIANGULO\n";
        }
        else if((A*A) == ((B*B) + (C*C)))
        {
            cout<<"TRIANGULO RETANGULO\n";
        }
        else if((A*A) > ((B*B) + (C*C)))
        {
            cout<<"TRIANGULO OBTUSANGULO\n";
        }
        else if((A*A) < ((B*B) + (C*C)))
        {
            cout<<"TRIANGULO ACUTANGULO\n";
        }
        else{}
    }


    return 0;
}
