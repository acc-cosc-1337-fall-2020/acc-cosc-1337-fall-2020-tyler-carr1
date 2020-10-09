#include "dna.h"

using std::swap;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna)
{
  double gc_count = 0;

  for(int i = 0; i < dna.length(); i++)
  {
    if(dna[i] == 'G' || dna[i] == 'C')
    {
      gc_count++;
    }
  }

  gc_count /= dna.length();

  return gc_count;
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string reverse_string(string dna)
{
  int rev = dna.length();

  for(int i = 0; i < rev / 2; i++)
  {
    swap(dna[i], dna[rev - i - 1]);
  }

  return dna;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
  string rev_comp = reverse_string(dna);
  for(int i = 0; i < rev_comp.length(); i++)
  {
    if(rev_comp[i] == 'A')
    {
      rev_comp[i] = 'T';
    }
    else if(rev_comp[i] == 'T')
    {
      rev_comp[i] = 'A';
    }
    else if(rev_comp[i] == 'C')
    {
      rev_comp[i] = 'G';
    }
    else
    {
      rev_comp[i] = 'C';
    }
  }

  return rev_comp;
}