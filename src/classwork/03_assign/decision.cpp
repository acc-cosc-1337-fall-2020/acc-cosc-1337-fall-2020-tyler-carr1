//cpp
#include "decision.h"
#include <iostream>
#include<string>

using std::cout, std::cin, std::string;

string get_letter_grade_using_if(int grade)
{

  string letter_grade;

  if(grade >= 90 && grade <= 100)
  {
    letter_grade = "A";
  }
  else if(grade >= 80 && grade <= 89)
  {
    letter_grade = "B";
  }
  else if(grade >= 70 && grade <= 79)
  {
    letter_grade = "C";
  }
  else if(grade >= 60 && grade <= 69)
  {
    letter_grade = "D";
  }
  else if(grade >= 0 && grade <= 59)
  {
    letter_grade = "F";
  }
  else
  {
    letter_grade = "Invalid Number";
  }

  return letter_grade;
}

string get_letter_grade_using_switch(int grade)
{
  string letter_grade;

  switch(grade)
  {
    case 100:
      letter_grade = "A";
      break;
    case 95:
      letter_grade = "A";
      break;
    case 85:
      letter_grade = "B";
      break;
    case 75:
      letter_grade = "C";
      break;
    case 65:
      letter_grade = "D";
      break;
    case 50:
      letter_grade = "F";
      break;
    default:
      letter_grade = "Invalid Number";
      break;
  }

  return letter_grade;
}