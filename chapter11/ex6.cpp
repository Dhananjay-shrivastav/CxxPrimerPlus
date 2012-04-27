/*
Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it overloads all six
relational operators.The operators should compare the pounds members and return
a type bool value.Write a program that declares an array of six Stonewt objects and
initializes the first three objects in the array declaration.Then it should use a loop
to read in values used to set the remaining three array elements.Then it should
report the smallest element, the largest element, and how many elements are greater
or equal to 11 stone. (The simplest approach is to create a Stonewt object initialized
to 11 stone and to compare the other objects with that object.)
*/

// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::cin;
#include "ex6stonewt.h"

int main() {
  double x;
  Stonewt sta[6]={276.8, 275, 21};
  for (int i=3; i<6; i++) {
    cout << "Enter pounds (" << i << "): ";
    cin >> x;
    sta[i]=x;
  }
  
  Stonewt small=sta[0];
  Stonewt large=sta[0];

  Stonewt s11 = 11;
  int cnt=0;
  for (int i=0; i<6; i++) {
    if (small > sta[i]) {
      small = sta[i];
    } 
    if (large < sta[i])
      large = sta[i];
    
    if (sta[i] > s11 || sta[i] == s11)
      cnt++;
  }
  
  cout << "The smallest element is: " << small 
       << "The largest element is: "<< large 
       << "There is " << cnt << " element(s) greater or equal to 11 stone.\n";
  return 0;
}
