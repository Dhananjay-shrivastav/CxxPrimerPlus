/*

1. Write a short program that asks for your height in integer inches and then converts your
height to feet and inches. Have the program use the underscore character to indicate
where to type the response. Also, use a const symbolic constant to represent the conversion
factor.

*/

#include <iostream>
using namespace std;

int main() {
  cout << "Enter your height (in inches): ________\b\b\b\b\b\b\b\b";
  int height;
  cin >> height;

  const int inchesPerFoot = 12;
  int feet = height / inchesPerFoot ;
  int inches = height % inchesPerFoot;
  
  cout << height 
       << " inches are "
       << feet
       << " feet, "
       << inches
       << " inch(es)."
       << endl;
  
  return(0);
}

