/****************************************************
* Program:
*    CS124 Review #2.30 , Counter
* Author:
*    Jaxon Hamm
* Summary:
*    Use for loops to count multiples of a number under
*    one hundred and then sum them together.
*****************************************************/

#include <iostream>
using namespace std;

/*****************************************************
* Use a for loop to sum up multiples of  number under 100.
******************************************************/
int main() {
   float sum = 0;
   float num = 0;
   cout << "What multiples are we adding? ";
   cin  >> num;
   for (int i = 0; (num * i) < 100; i++)
    sum += num * i;
  cout << "The sum of multiples of " << num << " less than 100 are: " << sum << endl;
  return 0;
 }
