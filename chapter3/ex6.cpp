/*
6. Write a program that asks you to enter an automobile gasoline consumption figure in the
European style (liters per 100 kilometers) and converts to the U.S. style of miles per gallon.
Note that in addition to using different units of measurement, the U.S approach
(distance / fuel) is the inverse of the European approach (fuel / distance). Note that 100
kilometers is 62.14 miles, and 1 gallon is 3.875 liters. Thus, 19 mpg is about 12.4 l/100
km, and 27 mpg is about 8.7 l/100 km.
*/

#include <iostream>

using namespace std;

int main(){
  const float milesPer100km = 62.14;
  const float litersPerGallon = 3.875;
  cout << "Enter automobile gasline consumption figure in the European stype (litters per 100 kilometers) :";
  double lp100km;
  cin >> lp100km;
  
  double mpg = 1/ (lp100km / litersPerGallon)  * milesPer100km;
  cout << lp100km
       << " litters per 100 kilometers = "
       << mpg
       << " miles per gallon"
       << endl;
  return(0);
}
