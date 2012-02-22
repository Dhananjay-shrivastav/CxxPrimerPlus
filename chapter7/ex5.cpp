/*
Define a recursive function that takes an integer argument and returns the factorial of
that argument. Recall that 3 factorial, written 3!, equals 3 ¡Á 2!, and so on, with 0!
defined as 1. In general, if n is greater than zero, n! = n * (n ¨C 1)!. Test your function in a
program that uses a loop to allow the user to enter various values for which the program
reports the factorial.
*/

#include <iostream>
using namespace std;

int factorial (int x);

int main() {
  cout << "Enter an integer number: ";
  int x;
  cin >> x;
  int res;
  res = factorial(x);
  cout << "The factorial of " << x 
       << " is " << res << endl;
  return 0;
}

int factorial (int x) {
  int res;
  if (x == 0 || x == 1) {
    res = 1;
  } else {
    res = x*factorial(x-1);
  }
  return res;
}
