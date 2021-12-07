#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    stack<char> a;
    string s;
    int flag = 0;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
        {
            a.push(s[i]);
            flag=1;
        }
        if(!a.empty())
        {
            if(s[i]==')')
            {
                if(a.top()=='(')
                {
                    a.pop();
                    continue;
                }
                else
                {
                    break;
                }

            }

            if(s[i]=='}')
            {
                if(a.top()=='{')
                {
                    a.pop();
                    continue;
                }
                else
                {
                    break;
                }

            }

            if(s[i]==']')
            {
                if(a.top()=='[')
                {
                    a.pop();
                    continue;
                }
                else
                {
                    break;
                }

            }
        }
    }

    if((a.empty()) && flag == 1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

    return 0;
}
