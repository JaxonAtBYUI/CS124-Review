/****************************************************
* Program:
*    CS124 Review #3.00 , Average Grades
* Author:
*    Jaxon Hamm
* Summary:
*    Use an array to get a list of grades and then
*    output the average of that list.
*****************************************************/
//////////////////////////////////////////////////////
//                INCLUDE STATEMENTS                //
//////////////////////////////////////////////////////
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////
//                 DEFINED MACROS                   //
//////////////////////////////////////////////////////

#ifdef DEBUG
#define Debug(x) x
#else
#define Debug(x)
#endif

//////////////////////////////////////////////////////
//              PROTOTYPED FUNCTIONS                //
//////////////////////////////////////////////////////
void getGrades(int listGrades[]);
int averageGrades(int listGrades[]);

/*****************************************************
* <DESCRIBE WHAT INT MAIN DOES IN ONE SENTENCE>
******************************************************/
int main() {
  //Define the list of Grades
  int listGrades[10] ;

  //Get the grades
  getGrades(listGrades);

  //Average the grades
  int average = averageGrades(listGrades);

  cout << "Average Grade: " << average << "%\n";

  return 0;
}

/*****************************************************
* GET GRADES
* Gets the grades from the user and returns them in a list.
******************************************************/
void getGrades(int listGrades[]) {
  for (int i = 0; i < 10; i++) {
    cout << "Grade " << i + 1 << ": ";
    cin  >> listGrades[i];
    }
}

/*****************************************************
* AVERAGE GRADES
* Takes the list of grades and averages them together.
******************************************************/
int averageGrades(int listGrades[]) {
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    sum += listGrades[i];
  }
  return sum / 10;
}
