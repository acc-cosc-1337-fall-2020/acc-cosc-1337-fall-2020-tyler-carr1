//write include statements
#include<iostream>
#include<string>
#include "dna.h"

//write using statements

using std::cout, std::cin, std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
  char choice;
  int selection = 0;
  string dna_input;

  cout<<"Welcome to the DNA Help Center.\n";
  do
  {
    do
    {
      cout<<"Please choose one of the following: \n1) Get GC Content\n2) Get DNA Complement.\nEnter your choice: ";
      cin>>selection;

      if(selection > 2 || selection < 1)
      {
        cout<<"Invalid selection, please try again.\n\n";
      }

    }while(selection > 2 || selection < 1);

    cout<<"Please enter a DNA sequence you wish to use: ";
    cin>>dna_input;

    if(selection == 1)
    {
      double result = get_gc_content(dna_input);

      result *= 100;

      cout<<"The GC Content for the DNA sequence ("<<dna_input<<") entered is: "<<result<<"%";
    }
    else
    {
      string result = get_dna_complement(dna_input);
      cout<<"The DNA Complement for the DNA sequence( "<<dna_input<<") entered is: "<<result;
    }

    cout<<"\n\nDo you have another sequence you would like to enter? (Y/N)";
    cin>>choice;
    cout<<"\n";

  }while(choice == 'N' || choice == 'n');

	return 0;
}