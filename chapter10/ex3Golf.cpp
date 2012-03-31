#include <iostream>
#include "ex3Golf.h"
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

Golf::Golf(const char *fn, const int h) {
  strcpy(fullname, fn);
  handicap = h;
};

void Golf::setgolf(){
  cout << "Enter full name: ";
  const int Len = this->Len;
  //cin.getline(this->fullname, this->Len);
  char fn[Len];
  cin.getline(fn, Len);
  cout << "Enter handicap: ";
  //cin >> this->handicap;
  int h;
  cin >> h;
  Golf gtmp(fn, h);
  *this = gtmp;
};

void Golf::show() {
  cout << fullname << "\t"
       << handicap << endl;
}


