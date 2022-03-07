/****************************************************
* Program:
*    CS124 Review #1.20 , Many Prompts
* Author:
*    Jaxon Hamm
* Summary:
*    Write a program getting the Name, age, and GPA,
*    as well as the gpa aspired too of the user, then
*    then print it out to the user
*****************************************************/

#include <iostream>
using namespace std;

/*****************************************************
* Take inputs and print them back to the console.
******************************************************/
int main() {
  //Define the data which we will be storing and using.
  char name[256];
  int age;
  float GPA;
  char grade;

  //Get the first name of the user.
  cout << "What is your first name: ";
  cin.getline(name, 255);
  cout << endl;

  //Get the age of the user.
  cout << "What is your age: ";
  cin  >> age;
  cout << endl;

  //Get the GPA from user.
  cout << "What is your GPA: ";
  cin  >> GPA;
  cout << endl;

  //Get the grade the user hopes to achive.
  cout << "What grade do you hope to get in CS 124: ";
  cin  >> grade;
  cout << endl;

  //Print out the entirety of what the program has collected from the user.
  cout << "\t" << name << ", you are " << age << " with a " << GPA
       << ". You wil get an " << grade << ".\n";

  return 0;

}
