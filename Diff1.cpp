// diff1.cpp
//
// Name: Samantha Reap
// E-mail: shreap@usc.edu
// ------------------------------------------------------

// Add your code below
#include <iostream>
using namespace std;

int main()
{
/**DIRECTION:
-user repeatedly (loop) enters double values.
-count how many times 2 consecutive values differe by at most 1
-quit when 0 is entered (break) AND print the number of consecutive values.
ON the last line**/

double numNow, numPast;
int count = 0;

//so first comparison doesn't go wrong
numPast = 0;

//get the input
cout << "Enter a number (0 to quit): " << endl;
cin >> numNow;

/*start loop while current number is not 0*/
while (numNow != 0) {
  if (numPast != 0) {
    if (numNow - numPast <= 1 && numNow - numPast >= -1) {
      count++;
    }
  }
  numPast = numNow;
  cin >> numNow;
}


// cout << "Enter a number (0 to quit): " << endl

//Output the solution in the following format
//cout << "There are " << num << " consecutive values that differ by one" << endl;
cout << "There are " << count << " consecutive values that differ by one" << endl;
return 0;
}
