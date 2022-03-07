/****************************************************
* Program:
*    CS124 Review #1.41 , Prompt Function
* Author:
*    Jaxon Hamm
* Summary:
*    Demonstrate how to creat a simple prompt function.
*
*****************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

//Prototype the functions.
float getGPA();

/*****************************************************
* Display the user's GPA.
******************************************************/
int main() {
  //Format floats for GPA.
  cout.setf(ios::showpoint);
  cout.setf(ios::fixed);
  cout.precision(2);

  //Prompt the user for their age.
  float GPA = getGPA();

  //Output their age to be displayed on the screen.
  cout << " Your GPA is " << GPA << ".\n";

  return 0;
}

/***********************************************************
* GET AGE
* Prompt the user for their age and return it back to main.
***********************************************************/
float getGPA() {
  float GPA;
  cout << "What is your GPA? ";
  cin  >> GPA;
  return GPA;
}
