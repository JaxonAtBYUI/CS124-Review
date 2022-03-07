/****************************************************
* Program:
*    CS124 Review #1.31 , Temperature Conversion
* Author:
*    Jaxon Hamm
* Summary:
*    Take in the user input temperature and convert it
*    from Fahrenheit to Celcius or vise versa.
*****************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

/*****************************************************
* Convert temperature between the metric and imperial systems.
******************************************************/
int main() {
  //Set up the floats so they work correctly in math.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(0);

  //Get which system they will be using.
  char system[256];
  for (bool valid = false; valid == false;) {
    cout << "Which system will you be converting from? ";
    cin  >> system;
    if (system[0] == 'c' || system[0] == 'C' || system[0] == 'f' || system[0] == 'F')
      valid = true;
    else {
      cout << "System is invalid, please enter Fahrenheit or Celcius.\n";
    }
  }

  //Get the degrees in either celcius or fahrenheit.
  int degrees;
  if (system[0] == 'c' || system[0] == 'C') {
    cout << "What is the degrees in Celcius you will be converting? ";
    cin  >> degrees;
  }
  else {
    cout << "What is the degrees in Fahrenheit you will be converting? ";
    cin >> degrees;
  }

  //Make the conversion and display it to the user.
  int convertedDegrees = 0;
  if  (system[0] == 'C' || system[0] == 'c') {
    convertedDegrees = (int)(degrees * (float)9/(float)5) + 32;
    cout << "\tFahrenheit: " << convertedDegrees << endl;
  }
  else {
    convertedDegrees = (int)((float)5/(float)9 * (degrees - 32));
    cout << "\tCelcius: " << convertedDegrees << endl;
  }

  return 0;
}
