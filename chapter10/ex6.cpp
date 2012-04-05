/*
Here’s a class declaration:
class Move
{
private:
double x;
double y;
public:
Move(double a = 0, double b = 0); // sets x, y to a, b
showmove() const; // shows current x, y values
Move add(const Move & m) const;
// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
reset(double a = 0, double b = 0); // resets x,y to a, b
};
Create member function definitions and a program that exercises the class.
*/

#include <iostream>
#include "ex6move.h"

using namespace std;

int main() {
  Move mo;
  cout << "initial move object:\n";
  mo.showmove();
  cout << "reset x=1,y=2:\n";
  mo.reset(1,2);
  mo.showmove();
  cout << "add x by 3, and y by 4:\n";
  Move mo2(3,4);
  mo = mo.add(mo2);
  mo.showmove();
  return 0;
}
