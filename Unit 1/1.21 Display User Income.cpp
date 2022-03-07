/****************************************************
* Program:
*    CS124 Review #1.22 , Display User Income
* Author:
*    Jaxon Hamm
* Summary:
*    Recieve the user income and display it back to them.
*
*
*****************************************************/
#include <iomanip>
#include <iostream>
using namespace std;

/*****************************************************
* Get the user input and dipslay it back to them.
******************************************************/
int main() {
  //Declare the variable that the income will be in and format the nubmers.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  float income;

  //Get the user input.
  cout << "\tYour monthly income: ";
  cin  >> income;
  cout << endl;

  //Display it back to them.
  cout << "Your income is: $" << setw(9) << income << endl;

  return 0;
}
