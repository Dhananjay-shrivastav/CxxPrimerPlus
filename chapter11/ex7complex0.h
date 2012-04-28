// ex7complex0.h -- definition for the complex class
#ifndef COMPLEX0_H_
#define COMPLEX0_H_

#include <iostream>

class Complex0 {
 private:
  double real;
  double imaginary;
 public:
  Complex0();// default constructor
  Complex0(double r, double i);
  ~Complex0();
  friend Complex0 operator+(const Complex0 & c, const Complex0 & p);
  friend Complex0 operator-(const Complex0 & c, const Complex0 & p);
  friend Complex0 operator*(const Complex0 & c, const Complex0 & p);
  friend Complex0 operator*(const Complex0 & c, double n);
  friend Complex0 operator*(double n, const Complex0 & p) {return(p*n);};
  friend Complex0 operator~(const Complex0 & c);
  friend std::istream & operator>>(std::istream & is, Complex0 & c);  
  friend std::ostream & operator<<(std::ostream & os, const Complex0 & c);
};
#endif
