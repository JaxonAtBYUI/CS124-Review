/****************************************************
* Program:
*    CS124 Review #1.12 , Escape Sequences
* Author:
*    Jaxon Hamm
* Summary:
*    Show all of the escape sequences that are available
*    to be used when using cout.
*
*****************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

/*****************************************************
* Display table of escape sequences
******************************************************/
int main() {
  cout << "The escape sequences are:\n";
  cout << "\t" << left << setw(9) << "Newline" <<"\\n"  << endl;
  cout << "\t" << left << setw(9) << "Tab"     <<"\\t"  << endl;
  cout << "\t" << left << setw(9) << "Slash"   <<"\\\\" << endl;
  cout << "\t" << left << setw(9) << "SQuote"  <<"\\\'" << endl;
  cout << "\t" << left << setw(9) << "DQuote"  <<"\\\"" << endl;

  return 0;
}
