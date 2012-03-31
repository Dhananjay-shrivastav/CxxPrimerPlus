/*
Do Programming Exercise 4 from Chapter 9 but convert the Sales structure and
its associated functions to a class and its methods. Replace the setSales(Sales &,
double [], int) function with a constructor. Implement the interactive
setSales(Sales &) method by using the constructor. Keep the class within the
namespace SALES.
*/

#include <iostream>
#include "ex4namesp.h"
using namespace std;
using namespace SALES;

int main() {
  double ar[] = {1.1,2.2,3.3,4.4};
  Sales s1(ar,4);
  s1.show();
  s1.setSales();
  s1.show();
  return 0;
}
