/****************************************************
* Program:
*    CS124 Review #1.61 , Tax Brackets
* Author:
*    Jaxon Hamm
* Summary:
*    Determine which tax bracket the user falls into
*    based upon thier income.
*
*****************************************************/

#include <iostream>
using namespace std;

//Prototype functions
int taxBracket(float income);

/*****************************************************
* Take income and tell which tax bracke the user is in.
******************************************************/
int main() {
  //Get the income from the user.
  float income = -1.0;
  while (income < 0) {
    cout << "Income: ";
    cin >> income;
    if (income < 0)
      cout << "That is not a valid income. Please enter a positive income.\n";
  }

  //Tell the user what tax bracket they are in.
  cout << "Your tax bracket is " << taxBracket(income) << '%' << endl;

  return 0;
}

/***********************************************************
* TAX BRACKET
* Determine which tax bracket the user is in and return the percent.
***********************************************************/
int taxBracket(float income) {
  if (income <= 15100)
    return 10;
  else if (income > 15100 && income <= 61300)
    return 15;
  else if (income > 61300 && income <= 123700)
    return 25;
  else if (income > 123700 && income <= 188450)
    return 28;
  else if (income > 188450 && income <= 336550)
    return 33;
  else
    return 35;
}
