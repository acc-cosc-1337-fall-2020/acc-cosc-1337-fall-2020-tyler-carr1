//Write the include statement for decisions.h here
#include<iostream>
#include "decision.h"

//Write namespace using statements for cout and cin

using std::cout, std::cin;

int main() 
{

  int grade;

  cout<<"Please enter your grade: ";
  cin>>grade;

  if(grade > 100 || grade < 0)
  {
    cout<<"The number entered is out of range\n";
  }
  else if(get_letter_grade_using_switch(grade) == "Invalid Number")
  {
    cout<<"Your grade is: "<<get_letter_grade_using_if(grade)<<"\n";
  }
  else
  {
    cout<<"Your grade is: "<<get_letter_grade_using_switch(grade)<<"\n";
  }


	return 0;
}

