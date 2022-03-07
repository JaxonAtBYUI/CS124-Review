/****************************************************
* Program:
*    CS124 Review #1.41 , Prompt Function
* Author:
*    Jaxon Hamm
* Summary:
*    Demonstrate how to creat a simple prompt function.
*
*****************************************************/

#include <iostream>
using namespace std;

//Prototype the functions.
int getAge();

/*****************************************************
* Display the users age./
******************************************************/
int main() {
  //Prompt the user for their age.
  int age = getAge();

  //Output their age to be displayed on the screen.
  cout << " Your age is " << age << " years old.\n";

  return 0;
}

/***********************************************************
* GET AGE
* Prompt the user for their age and return it back to main.
***********************************************************/
int getAge() {
  int age;
  cout << "What is your age? ";
  cin  >> age;
  return age;
}
