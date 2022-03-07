/****************************************************
* Program:
*    CS124 Review #1.50 , Decision Function
* Author:
*    Jaxon Hamm
* Summary:
*    Write a function to help make descisions.
*****************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

//Prototype the functions.
double getNumInput(char prompt[256]);
double computeEligible(double income, int children);

/*****************************************************
* Determine whether someone is eligible for child tax credit.
******************************************************/
int main() {
  //format cout for money output.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  //Get the user information
  char prompt[256] = "What is your income: ";
  double income = getNumInput(prompt);
  char prompt2[256] = "How many children? ";
  int children = getNumInput(prompt2);

  //Compute the amount of child income tax that the user is eligible for.
  cout << "Child Tax Credit: $ " << computeEligible(income, children) << endl;

  return 0;
}

/***********************************************************
* GET NUMERICAL INPUT
* Get numerical input from the user in the form of a double.
***********************************************************/
double getNumInput (char prompt[256]) {
  cout << prompt;
  double temp;
  cin >> temp;
  return temp;
}

/***********************************************************
* COMPUTE ELIGIBLE
* Compute the amount of child tax eligible for the user.
***********************************************************/
double computeEligible (double income, int children) {
  if (income <= 110000) {
    return children * 1000;
  }
  else {
    income -= 110000;
    double eligible = (float)children * (1000 - (income * .05));
    if (eligible <= 0)
      return 0;
    else
      return eligible;
  }
}
