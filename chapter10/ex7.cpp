/*
A Betelgeusean plorg has these properties:
Data
A plorg has a name with no more than 19 letters.
A plorg has a contentment index (CI), which is an integer.
Operations
A new plorg starts out with a name and a CI of 50.
A plorg’s CI can change.
A plorg can report its name and CI.
The default plorg has the name "Plorga".
Write a Plorg class declaration (including data members and member function prototypes)
that represents a plorg.Write the function definitions for the member functions.
Write a short program that demonstrates all the features of the Plorg class.
*/


#include <iostream>
#include "ex7plorg.h"

int main() {
  std::cout << "initial:\n";
  Plorg pl("JNU");
  pl.show();

  std::cout << "update ci:\n";
  pl.updateCI(3);
  pl.show();
  return 0;
}
