#include<iostream>
#include"loops.h"
//cpp

using std::cout, std::cin;

int factorial_func(int nums)
{

  int expected_number = 1;

  for(int i=1; i <= nums; i++)
  {
    expected_number = expected_number * i;
  }

  return expected_number;
}