#include<iostream>
#include<cmath>
#include <iomanip>

using namespace std;

int main()
{
    int tipParcent,taxParcent;
    double mealCost,totalCost,tip,tax;
    std::cin>>mealCost>>tipParcent>>taxParcent;
    tip = (mealCost*tipParcent)/100;
    tax = (mealCost*taxParcent)/100;
    totalCost = mealCost + tip + tax;
    std::cout<<round(totalCost)<<"\n";
    return 0;
}
