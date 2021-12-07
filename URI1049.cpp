#include<iostream>

using namespace std;

int main()
{
    string first,second,third;
    cin>>first>>second>>third;
    if(first =="vertebrado")
    {
        if(second =="ave")
        {
            if(third =="carnivoro")
            {
                cout<<"aguia\n";
            }
            if(third =="onivoro")
            {
                cout<<"pomba\n";
            }
        }
        if(second =="mamifero")
        {
            if(third =="onivoro")
            {
                cout<<"homem\n";
            }
            if(third =="herbivoro")
            {
                cout<<"vaca\n";
            }
        }
    }
    if(first=="invertebrado")
    {
        if(second =="inseto")
        {
            if(third =="hematofago")
            {
                cout<<"pulga\n";
            }
            if(third =="herbivoro")
            {
                cout<<"lagarta\n";
            }
        }
        if(second =="anelideo")
        {
            if(third =="hematofago")
            {
                cout<<"sanguessuga\n";
            }
            if(third =="onivoro")
            {
                cout<<"minhoca\n";
            }
        }
    }
    return 0;
}
