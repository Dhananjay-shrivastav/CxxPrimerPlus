/*
The Kingdom of Neutronia, where the unit of currency is the tvarp, has the following
income tax code:
first 5,000 tvarps: 0% tax
next 10,000 tvarps: 10% tax
next 20,000 tvarps: 15% tax
tvarps after 35,000: 20% tax
For example, someone earning 38,000 tvarps would owe 5,000 ¡Á 0.00 + 10,000 ¡Á 0.10
+ 20,000 ¡Á 0.15 + 3,000 ¡Á 0.20, or 4,600 tvarps. Write a program that uses a loop to
solicit incomes and to report tax owed. The loop should terminate when the user enters
a negative number or nonnumeric input.
*/

#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number of tvarps: ";

  int x;
  cin >> x;
  const int size = 4;
  float rate [size] = {0, 0.1, 0.15, 0.2};
  int curr [size] = {5000, 10000, 20000, 35000};
  while ( (! cin.fail()) && x > 0 ) {
    int owe = 0;
    for (int i=0; i < size && x >=0 ; i++) {
	if ( i < size -1) {
	  x = x - curr[i];
	  owe += curr[i] * rate[i];
	} else {
	  owe += x * rate[i];
	}
    }
    cout << "You owe " << owe << endl;
    cout << "Enter another number of tvarps: ";
    cin >> x;
  }
  return 0;
}
