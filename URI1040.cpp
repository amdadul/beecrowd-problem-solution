#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, B, C, D, E, MEDIA,MEDIA1;
    std::cin>> A >> B >> C >> D;
    MEDIA = ((A*2)+(B*3) + (C*4)+(D*1))/(2+3+4+1);
    if(MEDIA <7.0 && MEDIA >= 5.0)
    {
        std::cin>> E;
    }
    if(MEDIA >= 7.0)
    {
        std::cout<<"Media: "<<std::fixed<<std::setprecision(1)<<MEDIA<<"\n";
        std::cout<<"Aluno aprovado.\n";
    }
    else if(MEDIA < 5.0)
    {
        std::cout<<"Media: "<<std::fixed<<std::setprecision(1)<<MEDIA<<"\n";
        std::cout<<"Aluno reprovado.\n";
    }
    else
    {
        std::cout<<"Media: "<<std::fixed<<std::setprecision(1)<<MEDIA<<"\n";
        std::cout<<"Aluno em exame.\n";
        std::cout<<"Nota do exame: "<<E<<"\n";
        MEDIA1 = (MEDIA + E)/2;
        if(MEDIA1 >= 5.0)
        {
            std::cout<<"Aluno aprovado.\n";
            std::cout<<"Media final: "<<std::fixed<<std::setprecision(1)<<MEDIA1<<"\n";
        }
        else
        {
            std::cout<<"Aluno reprovado.\n";
            std::cout<<"Media final: "<<std::fixed<<std::setprecision(1)<<MEDIA1<<"\n";
        }
    }

    return 0;
}

