/*
Write a function that takes a reference to a string object as its parameter and that converts
the contents of the string to uppercase. Use the toupper() function described in
Table 6.4. Write a program that uses a loop which allows you to test the function with
different input. A sample run might look like this:
Enter a string (q to quit): go away
GO AWAY
Next string (q to quit): good grief!
GOOD GRIEF!
Next string (q to quit): q
Bye.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;
void up(string &x);

int main() {
  string input;
  cout << "Enter a string (q to quit):";
  getline(cin, input);
  while (input != "q") {
    up(input);
    cout << input << endl;
    cout << "Next string (q to quit):";
    getline(cin, input);
  }
  return 0;
}


void up(string &x) {
  for (int i=0; i < x.size(); i++) {
    x[i] = toupper(x[i]);
  }
}
