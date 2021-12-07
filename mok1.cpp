#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>> a>> b>> c;
    if(a<=100 || b<=100 || c<=100)
    {
            if(a==b && b==c && c==a)
            {
                cout<<"Equilateral Triangle\n";
            }
            else
            {
                if(a==b || a==c)
                {
                    cout<<"Isosceles Triangle\n";
                }
                else if(b==a || b==c)
                {
                    cout<<"Isosceles Triangle\n";
                }
                else if(c==a || c==b)
                {
                    cout<<"Isosceles Triangle\n";
                }
                else
                {
                    cout<<"Bad Triangle\n";
                }
            }
    }
    return 0;
}
