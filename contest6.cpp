#include<iostream>
#include<cmath>
#include <iomanip>

using namespace std;

class constructorDemo{
public:
   int num;
   char ch;
   /* This is a default constructor of the
    * class, do note that it's name is same as
    * class name and it doesn't have return type.
    */
   constructorDemo() {
      num = 100; ch = 'A';
   }
};


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

