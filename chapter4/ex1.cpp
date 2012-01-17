/*

1. Write a C++ program that requests and displays information as shown in the following
example of output:
What is your first name? Betty Sue
What is your last name? Yew
What letter grade do you deserve? B
What is your age? 22
Name: Yew, Betty Sue
Grade: C
Age: 22
Note that the program should be able to accept first names that comprise more than one
word. Also note that the program adjusts the grade downwardthat is, up one letter.
Assume that the user requests an A, a B, or a C so that you don’t have to worry about the
gap between a D and an F.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "What is your first name? ";
  string firstName;
  getline(cin, firstName);
  
  cout << "What is your last name? ";
  string lastName;
  getline(cin, lastName);
  
  char grad;
  cout << "What letter grade do you deserve? ";
  cin >> grad;
  grad = grad + 1;
  
  cout << "What is your age? ";
  int age;
  cin >> age;
  

  cout << "Name: " << lastName << ", " << firstName << endl
       << "Grade: " << grad << endl
       << "Age: " << age << endl;
  
  return(0);
}
