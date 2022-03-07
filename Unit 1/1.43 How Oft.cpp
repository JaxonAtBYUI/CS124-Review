/****************************************************
* Program:
*    CS124 Review #1.43 , How oft
* Author:
*    Jaxon Hamm
* Summary:
*    Use functions to display the famous question on forgiveness
*    once asked by the disciple Peter.
*****************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

//Prototype the functions.
void questionPeter();
int responseLord();

/*****************************************************
* <DESCRIBE WHAT INT MAIN DOES IN ONE SENTENCE>
******************************************************/
int main() {
  //As Peters question.
  questionPeter();

  //the first part of the Lord's response.
  cout << "Jesus saith unto him, I say not unto thee, Until Seven\n";
  cout << "times: but, Until " << responseLord() << ".\n";

  return 0;
}

/***********************************************************
* QUESTION PETER
* Ask the question which Peter asked of the Lord.
***********************************************************/
void questionPeter() {
  cout << "Lord, how oft shall my brother sin against me, and I forgive him?\n"
       << "Till seven time?\n";
}

/***********************************************************
* RESPONSE LORD
* Give the response of the lord to Peter's question.
***********************************************************/
int responseLord() {
  return 7*70;
}
