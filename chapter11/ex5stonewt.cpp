// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "ex5stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode form)
{
  stone = int (lbs) / Lbs_per_stn; // integer division
  pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
  pounds = lbs;
  mode = form;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, Mode form)
{
  stone = stn;
  pds_left = lbs;
  pounds = stn * Lbs_per_stn +lbs;
  mode = form;
}

Stonewt::Stonewt() // default constructor, wt = 0
{
  stone = pounds = pds_left = 0;
  mode = INTEGER;
}

Stonewt::~Stonewt() // destructor
{
}

/*
// show weight in stones
void Stonewt::show_stn() const
{
  cout << stone << " stone, " << pds_left << " pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const
{
  cout << pounds << " pounds\n";
}
*/

std::ostream & operator<<(std::ostream & os, const Stonewt & s) {
  if (s.mode == Stonewt::STONE) {
    os << s.stone << " stone, " << s.pds_left << " pounds\n";
  } else {
    os << s.pounds << " pounds\n";
  }
  return os;
}

Stonewt operator+(const Stonewt & s1, const Stonewt & s2) {
  Stonewt result(s1.pounds + s2.pounds);
  return(result);
}


Stonewt operator-(const Stonewt & s1, const Stonewt & s2) {
  Stonewt result(s1.pounds - s2.pounds);
  return(result);
}



Stonewt operator*(double n, const Stonewt & s) {
  Stonewt result(s.pounds*n);
  return(result);
}
