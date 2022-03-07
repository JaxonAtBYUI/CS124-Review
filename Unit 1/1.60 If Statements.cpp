/****************************************************
* Program:
*    CS124 Review #1.60 , IF Statements
* Author:
*    Jaxon Hamm
* Summary:
*    Use an if statement to see if an input from a user is
*    valid.
*****************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

//Prototype functions
bool validateGPA (float gpa);

/*****************************************************
* Check to see if GPA is valid.
******************************************************/
int main() {
  //Set up for gpa display.
  cout.setf(ios::showpoint);
  cout.setf(ios::fixed);
  cout.precision(1);

  //Get the user's GPA.
  float gpa;
  cout << "Please enter you GPA: ";
  cin  >> gpa;

  //Display if the GPA is a valid GPA or not.
  if (validateGPA(gpa))
    cout << "Your GPA is within the valid range.\n";
  else
    cout << "Your GPA is not in the valid range.\n";

  return 0;
}

/***********************************************************
* VALIDATE GPA
* Validates the GPA and returns as a bool.
***********************************************************/
bool validateGPA (float gpa) {
  if (gpa > 5.0 || gpa < 0.0)
    return false;
  else
    return true;
}
