/****************************************************
* Program:
*    CS124 Review #1.13 , Display Monthly Budget
* Author:
*    Jaxon Hamm
* Summary:
*    Display existing data on a monthly budget in a well
*    formatted table.
*****************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

/*****************************************************
* Display monthly budget
******************************************************/
int main() {
  //Format the nubmers for money.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  //Display the Header
  cout << "\t" << left << setw(15) << "Item" << "Projected" << endl;
  cout << "\t" << right << setfill('=') << setw(15) << "  " << setw(11) << "\n";
  cout << setfill(' ');

  //Display the Items and their projected costs
  cout << "\t" << left << setw(15) << "Income"  << "$" << right << setw(9) << 1000.00 << endl;
  cout << "\t" << left << setw(15) << "Taxes"   << "$" << right << setw(9) << 100.00  << endl;
  cout << "\t" << left << setw(15) << "Tithing" << "$" << right << setw(9) << 100.00  << endl;
  cout << "\t" << left << setw(15) << "Living"  << "$" << right << setw(9) << 650.00  << endl;
  cout << "\t" << left << setw(15) << "Other"   << "$" << right << setw(9) << 90.00   << endl;

  //Display the end of the table.
  cout << "\t" << right << setfill('=') << setw(15) << "  " << setw(11) << "\n";
  cout << setfill(' ');
  cout << "\t" << left << setw(15) << "Delta"   << "$" << right << setw(9) << 60.00   << endl;

  cout << endl;
  return 0;
}
