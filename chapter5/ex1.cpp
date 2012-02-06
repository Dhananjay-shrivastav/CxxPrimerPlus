/* Write a program that requests the user to enter two integers. The program should then
calculate and report the sum of all the integers between and including the two integers.
At this point, assume that the smaller integer is entered first. For example, if the user
enters 2 and 9, the program should report that the sum of all the integers from 2 through
9 is 44.
*/

#include <iostream>

using namespace std;

int main() {
  
  int a;
  cout << "Enter integer value: ";
  cin >> a;

  int b;
  cout << "Enter another integer (larger than the previous one): ";
  cin >> b;
  
  int s=0;
  for (int m = a; m <= b; m++) {
    s +=m;
  } 
  cout << "The sum of all integers from "
       << a
       << " through "
       << b
       << " is "
       << s << endl;
  return(0);
}
