#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

int main()
{
    int i,j,k,n;
    cin>>n;
    int roll[n],marks[n],troll,tmarks;
    string name[n],tname;

    if(n<=100)
    {
        for(i=0;i<n;i++)
        {
                cin>>roll[i];
                cin>>name[i];
                cin>>marks[i];
        }

        for(i=0;i<n-1;i++)
        {
            for (j = 0; j < n-i-1; j++)
            {
                if(marks[j]<marks[j+1])
                {
                    troll = roll[j+1];
                    tname = name[j+1];
                    tmarks = marks[j+1];
                    roll[j+1]=roll[j];
                    name[j+1]=name[j];
                    marks[j+1]=marks[j];
                    roll[j]=troll;
                    name[j]=tname;
                    marks[j]=tmarks;
                }

            }
        }


for(i=0;i<n-1;i++)
        {
            for (j = 0; j < n-i-1; j++)
            {
                if(marks[j]==marks[j+1])
                {

                if(roll[j]>roll[j+1])
                {
                    troll = roll[j+1];
                    tname = name[j+1];
                    tmarks = marks[j+1];
                    roll[j+1]=roll[j];
                    name[j+1]=name[j];
                    marks[j+1]=marks[j];
                    roll[j]=troll;
                    name[j]=tname;
                    marks[j]=tmarks;
                }
                }

            }
        }




        cout<<"Roll | ";
        cout<<"Name"<<setw(14);
        cout<<" | Marks\n";
        cout<<"-------------------------\n";
        for(i=0;i<n;i++)
        {
                     cout<<setw(4)<<roll[i]<<" | ";
                     cout<<name[i]<<setw(10)<<" | ";
                     cout<<marks[i]<<"\n";
        }
    }

    return 0;
}
