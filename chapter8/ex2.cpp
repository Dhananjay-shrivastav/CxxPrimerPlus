/*
The CandyBar structure contains three members. The first member holds the brand
name of a candy bar. The second member holds the weight (which may have a fractional
part) of the candy bar, and the third member holds the number of calories (an integer
value) in the candy bar. Write a program that uses a function that takes as arguments a
reference to CandyBar, a pointer-to-char, a double, and an int and uses the last three
values to set the corresponding members of the structure. The last three arguments
should have default values of "Millennium Munch," 2.85, and 350. Also, the program
should use a function that takes a reference to a CandyBar as an argument and displays
the contents of the structure. Use const where appropriate.
*/

#include <iostream>
#include <cstring>

using namespace std;

struct CandyBar {
  char name[30]; // brand name
  double weight;
  int calories;
};

void fillCandyBar(CandyBar * cb, char name [] = "Millennium", double weight=2.86, int cal=350);
void showCandyBar(CandyBar *cb);

int main() {
  CandyBar x;
  fillCandyBar(&x);
  showCandyBar(&x);
  return 0;
}

void fillCandyBar(CandyBar * cb, char name [], double weight, int cal){
  strcpy(cb->name, name);
  cb->weight = weight;
  cb->calories = cal;
}

void showCandyBar(CandyBar *cb) {
  cout << "Brand Name:\t" << cb->name << endl
       << "Weight:\t" << cb->weight << endl
       << "Calories:\t" << cb->calories << endl;
}
