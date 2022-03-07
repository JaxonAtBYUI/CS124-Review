/****************************************************
* Program:
*    CS124 Review #1.11 , Money Alignment
* Author:
*    Jaxon Hamm
* Summary:
*    Display two columns of output related to money
*    using both iomanip and formatting for cout.
*****************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*****************************************************
* Display money tables.
******************************************************/
int main() {
  //Format how the float values representing money are displayed in the console.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  //Display the table.
  cout << "$" << setw(7) << 124.45  << "\t"
       << "$" << setw(7) << 321.31  << endl;
  cout << "$" << setw(7) << 1.74    << "\t"
       << "$" << setw(7) << 4.21    << endl;
  cout << "$" << setw(7) << 7439.12 << "\t"
       << "$" << setw(7) << 54.92   << endl;
  cout << endl;

  return 0;
}
