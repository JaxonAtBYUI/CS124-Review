/****************************************************
* Program:
*    CS124 Review #1.51 , Tithe Payer
* Author:
*    Jaxon Hamm
* Summary:
*    Use Boolean logic to tell if the user is a full tithe payer.
*****************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

/*****************************************************
* Get input and output if they are a full tithe payer.
******************************************************/
int main() {
  //Format cout for money.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  //Ask the user for their income.
  cout << "Income: ";
  float income;
  cin >> income;
  //Ask the user for the tithe they payed.
  cout << "Tithe: ";
  float tithe;
  cin >> tithe;

  //Display if they are a full tithe payer or not.
  if (tithe >= (income/10))
    cout << "You are a full tithe payer.\n";
  else
    cout << "Will a man rob God? Yet ye have robbe me.\n"
         << "But ye say, wherein have we robbed thee?\n"
         << "In tithes and offerings. Malachi 3:8\n";

  return 0;
}
