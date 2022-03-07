/****************************************************
* Program:
*    CS124 Review #U2 , Calendar
* Author:
*    Jaxon Hamm
* Summary:
*    Output a calendar for the month from any year past 1752
*    onto the screen.
*
*****************************************************/
//////////////////////////////////////////////////////
//                INCLUDE STATEMENTS                //
//////////////////////////////////////////////////////
#include <cassert>
#include <iostream>
#include <iomanip>

using namespace std;

//////////////////////////////////////////////////////
//                 DEFINED MACROS                   //
//////////////////////////////////////////////////////

#define DEBUG
#ifdef DEBUG
#define Debug(x) x
#else
#define Debug(x)
#endif

//////////////////////////////////////////////////////
//              PROTOTYPED FUNCTIONS                //
//////////////////////////////////////////////////////
int getMonth();
int getYear();
bool display(int month, int year);
bool isLeapYear(int year);
int computeOffset(int month, int year);
int daysInMonth(int month, int year);

/*****************************************************
* Print an accurate callendar in the console.
******************************************************/
int main() {
  //Test for errors
  bool trigger = true;

  while (trigger){
    //Get the year desired by the user.
    int month = getMonth();
    int year  = getYear();

    //Debug assertions
    Debug(assert(year > 1752));
    Debug(assert(month > 0 && month < 13));

    //Add space between the input and the output.
    cout << endl;

    //Display the calendar to the user
    trigger = display(month, year);
  }


  return 0;
}

/*****************************************************
* GET MONTH
* Gets a valid month from the user.
******************************************************/
int getMonth() {
  //Initialize
  int month = -1;
  while (month < 0 || month > 12) {

    //Ask
    cout << "Enter a month number: ";

    //Recieve
    cin  >> month;

    //Validate
    if (month < 0 || month > 12)
      cout << "Month must be between 1 and 12.\n";
  }

  //Return the valid month
  return month;
}

/*****************************************************
* GET YEAR
* Gets a valid year input from the user.
******************************************************/
int getYear() {
  //Initialize
  int year = -1;
  while (!(year > 1752)) {

    //Ask
    cout << "Enter year: ";

    //Recieve
    cin  >> year;

    //Validate
    if (!(year > 1752))
      cout << "Year must be 1753 or later.\n";
  }

  //Return the year
  return year;
}

/*****************************************************
* DISPLAY
* Displays the entire calendar to the user.
******************************************************/
bool display (int month, int year) {
  // Display the month and year.
  switch (month) {
    case 1  :
      cout << "January, "   << year << endl;
      break;

    case 2  :
      cout << "February, "  << year << endl;
      break;

    case 3  :
      cout << "March, "     << year << endl;
      break;

    case 4  :
      cout << "April, "     << year << endl;
      break;

    case 5  :
      cout << "May, "       << year << endl;
      break;

    case 6  :
      cout << "June, "      << year << endl;
      break;

    case 7  :
      cout << "July, "      << year << endl;
      break;

    case 8  :
      cout << "August, "    << year << endl;
      break;

    case 9  :
      cout << "September, " << year << endl;
      break;

    case 10 :
      cout << "October, "   << year << endl;
      break;

    case 11 :
      cout << "November, "  << year << endl;
      break;

    case 12 :
      cout << "December, "  << year << endl;
      break;

    default:
      cout << "!!! INVALID MONTH !!!\n";
      //RETURNS THAT THERE WAS AN ERROR
      return true;
  }

  //Display the days at the top of the calendar
  cout << setw(4) << "Su"
       << setw(4) << "Mo"
       << setw(4) << "Tu"
       << setw(4) << "We"
       << setw(4) << "Th"
       << setw(4) << "Fr"
       << setw(4) << "Sa"
       << endl;

  //Get the offset of the calendar based on the numbers in the textbook.
  int offset = computeOffset(month, year);
  Debug(cout << "Offset == " << offset << endl);

  if (offset == 6)          //Immediately we are making the offset a more
    offset = 0;             //workable number becuase the first day displayed
  else                      //is sunday, and the offset was calulated for monday
    offset +=1;             //being 0 offset.

  //Move over by the offset.
  Debug(cout << "Offset == " << offset << endl);
  for (int n = offset; n > 0; n--) {
    cout << setw(4) << ' ';
  }

  //Get the number of days in the current month
  int days = daysInMonth(month, year);

  //Display each day of the month
  for (int n = 1; n <= days; n++) {
    //Wrap the week back around.
    if (offset == 7) {
      cout << endl;
      offset = 0;
    }

    //Output the day in the correct slot.
    cout << setw(4) << n;

    //Record which position we are in to track if it is time to loop.
    offset += 1;
  }

  //Leave extra space in the console
  cout << endl << endl;

  //Report no errors
  return false;
}

/*****************************************************
* IS LEAP YEAR
* Determines if a given year is a leap year.
******************************************************/
bool isLeapYear(int year) {
  if ((year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0))
    return true;
  return false;
}

/*****************************************************
* COMPUTE OFFSET
* Determines the offest of the day since January 1st 1753
* based upon the function in the textbook.
******************************************************/
int computeOffset(int month, int year) {
  Debug(assert(year > 1752));
  Debug(assert(month > 0 && month < 13));

  //Initialize
  int sum    = 0;

  //Loop through each year.
  for (int i = 1753; i < year; i++) {
    if (isLeapYear(i))
      sum += 366;
    else
      sum += 365;
  }

  //Add days dependent on the month
  for (int j = 1; j < month; j++) {
    sum += daysInMonth(j, year);
  }

  //Debug for strange outputs
  Debug(assert(sum >= 0));
  Debug(cout << "Sum == " << sum << endl);

  //Determine the offset of the day from Jan 1st 1753
  return sum % 7;
}

/*****************************************************
* DAYS IN MONTH
* Determines the number of days in month.
******************************************************/
int daysInMonth(int month, int year) {
  switch (month) {
    case 1  :                   //January = 31
      return 31;
      break;

    case 2  :                   //February = 28 (29 if leap year)
      if (F)
        return 29;
      else
        return 28;

    case 3  :                   //March = 31
      return 31;

    case 4  :                   //April = 30
      return 30;

    case 5  :                   //May = 31
      return 31;

    case 6  :                   //june = 30
      return 30;

    case 7  :                   //July = 31
      return 31;

    case 8  :                   //August = 31
      return 31;

    case 9  :                   //September = 30
      return 30;

    case 10 :                   //October = 31
      return 31;

    case 11 :                   //November = 30
      return 30;

    case 12 :                   //December = 31
      return 31;

    default:                   //If an exception occurs
      cout << "!!! THERE WAS AN ERROR DETERMINING DAYS IN MONTH !!!\n";
      return 0;
  }
}
