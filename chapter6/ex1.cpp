/*
Write a program that reads keyboard input to the @ symbol and that echoes the input
except for digits, converting each uppercase character to lowercase, and vice versa.
(Don¡¯t forget the cctype family.)
 */

#include <iostream>
#include <cctype>

using namespace std;

int main() {
  cout << "Enter anything you want: ";
  char ch;
  cin.get(ch);
  while (ch != '@') {
    if (ch >= 'a' && ch <= 'z') {
      ch = toupper(ch);
    } else if ( ch >= 'A' && ch <= 'Z') {
      ch = tolower(ch);
    }
    cout << ch;
    cin.get(ch);
  }
  cout << endl;
  return 0;
}
