#include "ex2Person.h"
#include <cstring>


Person::Person(const string & ln, const char * fn /* = "Heyyou" */) {
  lname = ln;
  strcpy(fname, fn);
};

void Person::Show() const {
  std::cout << *fname << " " << lname << std::endl; 
};

void Person::FormalShow() const {
  std::cout << lname << " " << *fname << std::endl; 
};
