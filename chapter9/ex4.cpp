/*
Write a three-file program based on the following namespace:
namespace SALES
{
const int QUARTERS = 4;
struct Sales
{
double sales[QUARTERS];
double average;
double max;
double min;
};
// copies the lesser of 4 or n items from the array ar
// to the sales member of s and computes and stores the
// average, maximum, and minimum values of the entered items;
// remaining elements of sales, if any, set to 0
void setSales(Sales & s, const double ar[], int n);
// gathers sales for 4 quarters interactively, stores them
// in the sales member of s and computes and stores the
// average, maximum, and minimum values
void setSales(Sales & s);
// display all information in structure s
void showSales(const Sales & s);
}
The first file should be a header file that contains the namespace.The second file
should be a source code file that extends the namespace to provide definitions for
the three prototyped functions.The third file should declare two Sales objects. It
should use the interactive version of setSales() to provide values for one structure
and the non-interactive version of setSales() to provide values for the second
structure. It should display the contents of both structures by using
showSales().
*/

#include <iostream>
#include "namesp.h"
using namespace std;
using namespace SALES;

int main(void) {
  Sales s1;
  double ar[QUARTERS] = {1.1, 2.2, 3.3,4.4};
  setSales(s1, ar, QUARTERS);
  Sales s2;
  setSales(s2);
  showSales(s1);
  showSales(s2);
  return 0;
}
