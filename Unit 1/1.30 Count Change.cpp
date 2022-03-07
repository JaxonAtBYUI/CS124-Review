/****************************************************
* Program:
*    CS124 Review #1.30 , Count Change
* Author:
*    Jaxon Hamm
* Summary:
*    Take an inputed amount of money and tell the user
*    what the correct way to make change would be.
*
*****************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

/*****************************************************
* Take in a dollar amount and convert it to dollars and cents.
******************************************************/
int main() {
  //Set up the floats for displaying money.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  //Get the amount of money to convert to change and verify it is positive.
  float money = 0.00;
  for (bool valid = false; valid == false;) {
    cout << "Please enter a positive dollar amount (ex:4.23): $";
    cin  >> money;
    if (money < 0)
      cout << "Input must a positive amount of money.\n";
    else
      valid = true;
    }

  //Initialize the divisions.
  int twenties = 0;
  int tens = 0;
  int fives = 0;
  int ones = 0;
  int quaters = 0;
  int dimes = 0;
  int nickels = 0;
  int pennies = 0;

  //Convert the money into cents.
  int moneyCents = (int)(money * 100);

  //Divide the money into each division, then leave the remainder stored in moneyCents.
  twenties = moneyCents / 2000;
  moneyCents %= 2000;

  tens = moneyCents / 1000;
  moneyCents %= 1000;

  fives = moneyCents / 500;
  moneyCents %= 500;

  ones = moneyCents / 100;
  moneyCents %= 100;

  quaters = moneyCents / 25;
  moneyCents %= 25;

  dimes = moneyCents / 10;
  moneyCents %= 10;

  nickels = moneyCents / 5;
  moneyCents %= 5;

  pennies = moneyCents / 1;
  moneyCents %= 1;

  //Print out the table of change to get to the specified amount of money.
  cout << "The required change for $" << money << " is:\n"
       << "\tTwenties: " << twenties << endl
       << "\tTens: "     << tens     << endl
       << "\tFives: "    << fives    << endl
       << "\tOnes: "     << ones     << endl
       << "\tQuarters: " << quaters  << endl
       << "\tDimes: "    << dimes    << endl
       << "\tNickels: "  << nickels  << endl
       << "\tPennies: "  << pennies     << endl;

  return 0;
}
