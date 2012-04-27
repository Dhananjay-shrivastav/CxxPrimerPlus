// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
 public:
  enum Mode {STONE, INTEGER, FLOAT};
 private:
  enum {Lbs_per_stn = 14}; // pounds per stone
  int stone; // whole stones
  double pds_left; // fractional pounds
  double pounds; // entire weight in pounds
  Mode mode;
 public:
  Stonewt(double lbs, Mode form=STONE); // constructor for double pounds
  Stonewt(int stn, double lbs, Mode form=INTEGER); // constructor for stone, lbs
  Stonewt(); // default constructor
  ~Stonewt();
  friend Stonewt operator+(const Stonewt & s1, const Stonewt & s2);
  friend Stonewt operator-(const Stonewt & s1, const Stonewt & s);
  friend Stonewt operator*(double n, const Stonewt & s);
  friend Stonewt operator*(const Stonewt & s, double n) {return n * s;};
  friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
  friend bool operator<(const Stonewt & s, const Stonewt & t);
  friend bool operator>(const Stonewt & s, const Stonewt & t);
  friend bool operator!=(const Stonewt & s, const Stonewt & t);
  friend bool operator==(const Stonewt & s, const Stonewt & t);
  //void show_lbs() const; // show weight in pounds format
  //void show_stn() const; // show weight in stone format
};
#endif
