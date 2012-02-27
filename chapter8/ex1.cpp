/*
Write a function that normally takes one argument, the address of a string, and prints
that string once. However, if a second, type int, argument is provided and is nonzero,
the function should print the string a number of times equal to the number of times that
function has been called at that point. (Note that the number of times the string is
printed is not equal to the value of the second argument; it is equal to the number of
times the function has been called.) Yes, this is a silly function, but it makes you use
some of the techniques discussed in this chapter. Use the function in a simple program
that demonstrates how the function works.
*/

#include <iostream>
#include <string>

using namespace std;

void showString(string * x, int n = 0);


int main() {
  cout << "Print the string 1 time by default:\n";
  string x = "Jinan University";
  showString(&x);
  cout << "\nPrint the string 5 time:\n";
  showString(&x, 5);
}

void showString(string * x, int n) {
  static int called = 0;
  if (n <= 0) {
    cout << *x << endl;
  } else {
    for (int i =0; i < n; i++) {
      showString(x);
    }
  }
}
