/****************************************************
* Program:
*    CS124 Review #1.40 , Simple Function Calling
* Author:
*    Jaxon Hamm
* Summary:
*    Learn how to write and calll funtions in programs.
*****************************************************/

//Definitions for the program.
#include <iostream>
using namespace std;

//Prototype the functions being called in the program.
void question();
int  answer();

/*****************************************************
* Answer lifes greatest question.
******************************************************/
int main() {
  //Call the function that asks the question.
  question();

  //Respond to the question by calling the function.
  cout << "The answer is: " << answer() << endl;

  return 0;
}

void question() {
  //Ask the question.
  cout << "What is the answer to life, the universe, and everything?\n";
}

int answer() {
  //Return the answer of the greatest computer ever constructed.
  return 42;
}
