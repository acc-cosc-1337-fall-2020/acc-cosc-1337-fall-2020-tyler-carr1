//write includes statements
#include<iostream>
#include"loops.h"
//write using statements for cin and cout
using std::cout, std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{

  int entered_number;
  char choice;
  int factorial;

  do
  {

    cout<<"Please entere a number you wish to factorial: ";
    cin>>entered_number;

    if(entered_number > 20 || entered_number < 1)
    {
      cout<<"The you entered number is out of range.";
    }
    else
    {
      while(entered_number > 0 && entered_number < 21)
      {
      factorial = factorial_func(entered_number); 
      cout<<"The factorial of "<<entered_number<<" is "<<factorial;
      break;
      }
    }

    cout<<"\n\nWould you like to enter another number? (Y/N)";
    cin>>choice;
    cout<<"\n";

  }while(choice == 'y' || choice == 'Y');

	return 0;
}