/****************************************************
* Program:
*    CS124 Review #1.42 , Compute Function
* Author:
*    Jaxon Hamm
* Summary:
*    Demonstrate how to send data to a function and
*    recieve data from a function.
*
*****************************************************/
#include <iomanip>
#include <iostream>
using namespace std;

//Prototype the functions.
int computeSavings(int income);
float promptIncome();
/*****************************************************
* Display how much money to put in savings after tihing.
******************************************************/
int main() {
  //Format the floats for displaying money.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  //prompt the user for their income.
  float income = promptIncome();

  //Compute the savings
  float savings = (float)computeSavings((income * 100)) / 100;

  //Output to the user their savings.
  cout << "You need to deposit $"
       << savings << endl;

  return 0;
}


/***********************************************************
* PROMPT INCOME
* Prompt the user for their income and return that number.
***********************************************************/
float promptIncome() {
  float income;
  cout << "What is your income? ";
  cin  >> income;
  return income;
}

/***********************************************************
* COMPUTE SAVINGS
* Take the input income, subtract tithing, and divide by two for savings.
***********************************************************/
int computeSavings(int income) {
  int savings = (income * .9) / 2;
  return savings;
}
