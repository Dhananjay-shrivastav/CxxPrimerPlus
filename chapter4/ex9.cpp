/*
9. Do Programming Exercise 6, but, instead of declaring an array of three CandyBar structures,
use new to allocate the array dynamically.
*/

#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
  string brand;
  double weight;
  int number;
};


int main() {
  CandyBar * pc;
  pc = new CandyBar [3];

  pc[0].brand =  "A";
  pc[0].weight = 1.2;
  pc[0].number =100;

  pc[1].brand =  "B";
  pc[1].weight = 2.3;
  pc[1].number =200;

  pc[2].brand =  "C";
  pc[2].weight = 3.4;
  pc[2].number =300;
  
  cout << pc[0].brand << "\t" << pc[0].weight << "\t" << pc[0].number << endl
       << pc[1].brand << "\t" << pc[1].weight << "\t" << pc[1].number << endl
       << pc[2].brand << "\t" << pc[2].weight << "\t" << pc[2].number << endl;

  return 0;
}

