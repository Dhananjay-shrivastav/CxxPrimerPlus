// Ex2 in Chapter 2
// Write a C++ program that asks for a distance in furlongs and converts it to yards.
// (One furlong is 220 yards.)

#include<iostream>

using namespace std;

int main() {
  int furlong;
  cout << "Enter a distance (in furlong) and press Enter: ";
  cin >> furlong;
  cout << "The distance is "
       << furlong
       << " furlongs"
       << ", that is "
       << furlong * 200
       << " yards"
       << endl;
  return(0);
}
