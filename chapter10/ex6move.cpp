#include <iostream>
#include "ex6move.h"

using namespace std;

Move::Move(double a, double b) {
  x = a;
  y = b;
}

void Move::showmove() const {
  cout << "x is " << x << "\t"
       << "y is " << y << endl;
}

Move Move::add(const Move & m) const {
  double newx = this->x + m.x;
  double newy = this->y + m.y;
  Move mo = Move(newx, newy);
  return mo;
}

void Move::reset(double a, double b) {
  x = a;
  y = b;
}
