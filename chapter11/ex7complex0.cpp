#include <iostream>
using std::cout;
using std::cin;
#include "ex7complex0.h"

Complex0::Complex0() {
  real =0;
  imaginary =0;
}

Complex0::Complex0(double r, double i) {
  real = r;
  imaginary = i;
}

Complex0::~Complex0() {

}

Complex0 operator+(const Complex0 & c ,const Complex0 & p){
  Complex0 result(c.real+p.real, c.imaginary+p.imaginary);
  return result;
}


Complex0 operator-(const Complex0 & c ,const Complex0 & p){
  Complex0 result(c.real-p.real, c.imaginary-p.imaginary);
  return result;
}


Complex0 operator*(const Complex0 & c ,const Complex0 & p){
  double r = c.real*p.real - c.imaginary*p.imaginary;
  double i = c.real*p.imaginary + c.imaginary*p.real;
  Complex0 result(r,i);
  return result;
}


Complex0 operator*(const Complex0 & c, double n) {
  Complex0 result(c.real*n, c.imaginary*n);
  return result;
}

Complex0 operator~(const Complex0 & c){
  Complex0 result(c.real, -c.imaginary);
  return result;
}

std::istream & operator>>(std::istream & is, Complex0 & c){
  is >> c.real >> c.imaginary;
  return is;
}

std::ostream & operator<<(std::ostream & os, const Complex0 & c){
  os << c.real << "+" << c.imaginary << "i";
  return os;
}


