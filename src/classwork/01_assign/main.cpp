//Write the include statement for types.h here
#include<iostream>
#include "types.h"

//Write include for capturing input from keyboard and displaying output to screen

using namespace std;

int main() 
{
  int num;
  int result;
  int num1 = 4;

  cout<<"Please input your number: ";
  cin>>num;
  result = multiply_numbers(num);
  cout<<result;
  result = multiply_numbers(num1);
  cout<<"\n"<<result<<"\n";
  
  return 0;
}
