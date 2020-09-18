//write include statements
#include <iostream>
#include "variables.h"


//write namespace using statement for cout
 using std::cout, std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
  double meal_amount, tip_rate, tip_amount, tax_amount, total;

  //calculating meal amount
  cout<<"Please enter the meal amount: ";
  cin>>meal_amount;
  tax_amount = get_sales_tax_amount(meal_amount);

  //calculating tip amount
  cout<<"Please enter the tip rate: ";
  cin>>tip_rate;
  tip_amount = get_tip_amount(meal_amount, tip_rate);

  //calculating total amount
  total = tip_amount + tax_amount + meal_amount;

  //returning breakdown of the bill
  cout<<"Meal Amount: "<<meal_amount;
  cout<<"\nSales Tax:   "<<tax_amount;
  cout<<"\nTip Amount:  "<<tip_amount;
  cout<<"\nTotal:       "<<total<<"\n";

 
 return 0;
}