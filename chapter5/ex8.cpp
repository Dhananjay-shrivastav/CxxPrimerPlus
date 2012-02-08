/*
Write a program that matches the description of the program in Programming Exercise
7, but use a string class object instead of an array. Include the string header file and
use a relational operator to make the comparison test.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;
  int wc = 0;
  
  cout << "Enter words (to stop, type the word done): ";
  cin >> word;

  while (word !=  "done") {
    cin >> word;
    wc += 1;
  }
  
  cout << "You entered a total of "
  << wc << " words." << endl;
  
  return 0;
}
