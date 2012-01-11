/*

5. Write a program that asks how many miles you have driven and how many gallons of
gasoline you have used and then reports the miles per gallon your car has gotten. Or, if
you prefer, the program can request distance in kilometers and petrol in liters and then
report the result European style, in liters per 100 kilometers.

*/

#include <iostream>

using namespace std;

int main() {
  cout << "Enter the miles you have driven:";
  long miles;
  cin >> miles;
  
  cout << "Enter gallons of gasoline you have used:";
  long gas;
  cin >> gas;

  double milesPerGallon = miles / gas;

  cout << endl
       << milesPerGallon
       << " miles per gallon your car has gotten."
       << endl;
  return(0);
}
