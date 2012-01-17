/*
3. Write a program that asks the user to enter his or her first name and then last name, and
that then constructs, stores, and displays a third string, consisting of the user’s last name
followed by a comma, a space, and first name. Use char arrays and functions from the
cstring header file. A sample run could look like this:
Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
  cout << "Enter your first name: ";
  const int size = 20;
  char firstName[size];
  cin.getline(firstName, size-1);
  cout << "Enter your last name: ";
  char lastName[size];
  cin.getline(lastName, size-1);

  char name[2*size+2];
  strcpy(name, lastName);
  strcat(name, ", ");
  strcat(name, firstName);
  
  cout << "Here's the information in a single string: " 
       << name << endl;
  return 0;
}
