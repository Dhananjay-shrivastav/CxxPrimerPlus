/*
Write a program that repeatedly asks the user to enter pairs of numbers until a
least one of the pair is 0. For each pair, the program should use a function to 
calculate the har- monic mean of the numbers. The function should return the 
answer to main(), which should report the result. The harmonic mean of the 
numbers is the inverse of the aver- age of the inverses and can be calculated 
as follows:
harmonic mean = 2.0 × x × y / (x + y)
*/

#include <iostream>
using namespace std;
double harmonicMean (double x, double y);

int main() {
  cout << "Enter a pair of numbers: ";
  double x,y;
  double m;
  cin >> x >> y;
  while (x !=0 && y !=0) {
    m=harmonicMean(x,y);
    cout << "The harmonic mean is " << m << endl;
    cout << "Enter another pair of numbers: ";
    cin >> x >> y;
  }
  return 0;
}


double harmonicMean(double x, double y) {
  double mean;
  mean = 2.0 * x * y / (x+y);
  return mean;
}
