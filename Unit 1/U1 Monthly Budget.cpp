/****************************************************
* Program:
*    CS124 Review #U1 , Monthly Budget
* Author:
*    Jaxon Hamm
* Summary:
*    Write program to manage a user's personal finances for a month.
*    This program will ask the user for various pieces of financial information
*    then will display a report of whether the user is on target to meet their
*    personal financial goals.
*****************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

//Prototype functions.
float getMoney (char prompt[256]);
float taxBracket (float monthlyIncome);
float computeTithe (float monthlyIncome);
void displayTable (float monthlyIncome, float budgetLiving, float monthlyLiving,
                   float monthlyTaxes,  float monthlyTithe, float monthlyOther);

/*****************************************************
* <DESCRIBE WHAT INT MAIN DOES IN ONE SENTENCE>
******************************************************/
int main() {
  //Format the chart to display money.
  cout.setf(ios::showpoint);
  cout.setf(ios::fixed);
  cout.precision(2);

  //Get the input from the user.
  cout << "This program keeps track of your monthly budget\n"
       << "Please enter the following:\n";

  char prompt0[] = "\tYour monthly income: ";
  float monthlyIncome = getMoney(prompt0);

  char prompt1[] = "\tYour budgeted living expenses: ";
  float budgetLiving = getMoney(prompt1);

  char prompt2[] = "\tYour actual living expenses: ";
  float monthlyLiving = getMoney(prompt2);

  char prompt3[] = "\tYour actual taxes withheld: ";
  float monthlyTaxes = getMoney(prompt3);

  char prompt4[] = "\tYour actual tithe offerings: ";
  float monthlyTithe = getMoney(prompt4);

  char prompt5[] = "\tYour actual other expense: ";
  float monthlyOther = getMoney(prompt5);

  cout << endl;

  //Display the table function.
  displayTable ( monthlyIncome,  budgetLiving,  monthlyLiving,
                      monthlyTaxes,   monthlyTithe,  monthlyOther);

  return 0;
}

/***********************************************************
* GET MONEY
* Get a valid positive monetary input from the user and return it.
***********************************************************/
float getMoney (char prompt[256]) {

  float temp = -1;
  while (temp < 0) {
    cout << prompt;
    cin >> temp;
    if (temp < 0)
      cout << "Input is invalid. Please enter a positive value.";
  }

  return temp;
}

/***********************************************************
* TAX BRACKET
* Calculate the tax bracket and return it as a decimal for math.
***********************************************************/
float taxBracket(float monthlyIncome) {
  if (monthlyIncome <= 15100)
    return (monthlyIncome * .10);
  else if (monthlyIncome > 15100 && monthlyIncome <= 61300)
    return (1510 + ((monthlyIncome - 15100) * .15));
  else if (monthlyIncome > 61300 && monthlyIncome <= 123700)
    return (8440 + ((monthlyIncome - 61300) * .25));
  else if (monthlyIncome > 123700 && monthlyIncome <= 188450)
    return (24040 + ((monthlyIncome - 123700) * .28));
  else if (monthlyIncome > 188450 && monthlyIncome <= 336550)
    return (42170 + ((monthlyIncome - 188450) * .33));
  else
    return (91043 + ((monthlyIncome - 336550) * .25));
}

/***********************************************************
* COMPUTE TITHE
* Computes the tithe of the user based on income.
***********************************************************/
float computeTithe (float monthlyIncome) {
  return monthlyIncome / 10;
}

/***********************************************************
* DISPLAY TABLE
* Displays the table of the budget to the user.
***********************************************************/
void displayTable (float monthlyIncome, float budgetLiving, float monthlyLiving,
                   float monthlyTaxes,  float monthlyTithe, float monthlyOther) {

  float budgetOther       = monthlyIncome - taxBracket(monthlyIncome) - computeTithe(monthlyIncome) - budgetLiving;
  float budgetTax         = taxBracket(monthlyIncome);
  float budgetTithe       = computeTithe(monthlyIncome);
  float budgetDifference  = monthlyIncome - taxBracket(monthlyIncome) - computeTithe(monthlyIncome) - budgetLiving - budgetOther;
  float monthlyDifference = monthlyIncome - monthlyTaxes - monthlyTithe - monthlyOther - monthlyLiving;

  cout << "The following is a report on your monthly expenses\n";
  cout << "\t" << left  << setw(16) << "Item"   << right << setw(12) << "Budget" << setw(16) << "Actual\n";

  cout << "\t" << right << setfill('=') << setw(16) << ' ' << setw(16) << ' ' << setw(16) << "\n" << setfill(' ');

  cout << "\t" << left  << setw(16) << "Income"   << "$" << right << setw(11) << monthlyIncome << setw(5) << '$' << setw(11) << monthlyIncome << endl;
  cout << "\t" << left  << setw(16) << "Taxes"    << "$" << right << setw(11) << budgetTax     << setw(5) << '$' << setw(11) << monthlyTaxes  << endl;
  cout << "\t" << left  << setw(16) << "Tithing"  << "$" << right << setw(11) << budgetTithe   << setw(5) << '$' << setw(11) << monthlyTithe  << endl;
  cout << "\t" << left  << setw(16) << "Living"   << "$" << right << setw(11) << budgetLiving  << setw(5) << '$' << setw(11) << monthlyLiving << endl;
  cout << "\t" << left  << setw(16) << "Living"   << "$" << right << setw(11) << budgetOther   << setw(5) << '$' << setw(11) << monthlyOther  << endl;

  cout << "\t" << right << setfill('=') << setw(16) << ' ' << setw(16) << ' ' << setw(16) << "\n" << setfill(' ');

  cout << "\t" << left  << setw(16) << "Difference"   << "$" << right << setw(11) << budgetDifference << setw(5) << '$' << setw(11) << monthlyDifference << endl;



}
