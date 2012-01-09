// Ex6 in Chapter 2

/*
Write a program that asks the user to enter an hour value and a minute value. The
main() function should then pass these two values to a type void function that displays
the two values in the format shown in the following sample run:
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28
*/

#include<iostream>

using namespace std;

void displayTime(int hour, int minute);

int main() {
  cout << "Enter the number of hours: ";
  int h;
  cin >> h;
  cout << "Enter the number of minutes: ";
  int m;
  cin >> m;
  displayTime(h,m);
  return(0);
}

void displayTime(int hour, int minute){
  cout << "Time " << hour << ":" << minute << endl;
}
