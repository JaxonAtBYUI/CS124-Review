/****************************************************
* Program:
*    CS124 Review #2.6 , Read File
* Author:
*    Jaxon Hamm
* Summary:
*    Practice reading files by taking grade data points,
*    averaging them together, and displaying them to
*    the user.
*****************************************************/

#include <iomanip>
#include <fstream>
#include <iostream>
using namespace std;

//Prototype functions
void getFileName(char fileName[]);
float readFile(char fileName[]);
void display(float average);

/*****************************************************
* Averages grade data for user.
******************************************************/
int main() {
  //Try to get the file and read it until it works.
  float average;
  bool error = true;

  while (error) {

    //Get the filename from the user.
    char fileName[256];
    getFileName(fileName);

    //Read the file and return the average.
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    average = readFile(fileName);

    //Test if there has been an error based on -404 error output by readFile
    if (average != -404)
      error = false;
  }
  //Display the average to the user.
  display(average);

  return 0;
}

/***********************************************************
* GET FILE NAME
* Gets the file name from the user.
***********************************************************/
void getFileName(char fileName[]) {
  cout << "Please enter the filename: ";
  cin  >> fileName;
}

/***********************************************************
* READ FILE
* Reads the file that the user inputted and averages the scores.
***********************************************************/
float readFile(char fileName[]) {
  //Open the file.
  ifstream fin(fileName);
  if (fin.fail()) {
    cout << "Error reading file \"" << fileName << "\"\n";
    return -404;
  }

  // Count the number of grades and add them to a sum.
  int i = 0;
  float sum = 0;
  for (float num;fin >> num; i++)
    sum += num;

  //Return the average of the grades.
  return (sum / i);
}

/***********************************************************
* DISPLAY
* Displays the average to the user.
***********************************************************/
void display(float average) {
  cout << "Average Grade: " << average << "%\n";
}
