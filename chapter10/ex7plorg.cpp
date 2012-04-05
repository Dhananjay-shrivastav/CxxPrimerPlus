#include <iostream>
#include <cstring>
#include "ex7plorg.h"


Plorg::Plorg(const char *n /* = "Plorga" */, const int c /* = 50 */) {
  strcpy(name, n);
  ci = c;
}

void Plorg::updateCI(int c) {
  ci = c;
}

void Plorg::show() const {
  std::cout << name << "\t" << ci << std::endl;
}
