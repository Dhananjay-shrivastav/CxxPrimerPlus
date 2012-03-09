/*
Here is a header file:
// golf.h -- for pe9-1.cpp
const int Len = 40;
struct golf
{
char fullname[Len];
int handicap;
};
// non-interactive version:
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
void setgolf(golf & g, const char * name, int hc);
// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
int setgolf(golf & g);
// function resets handicap to new value
void handicap(golf & g, int hc);
// function displays contents of golf structure
void showgolf(const golf & g);
Note that setgolf() is overloaded. Using the first version of setgolf() would
look like this:
golf ann;
setgolf(ann, "Ann Birdfree", 24);
The function call provides the information that¡¯s stored in the ann structure. Using
the second version of setgolf() would look like this:
golf andy;
setgolf(andy);

The function would prompt the user to enter the name and handicap and store
them in the andy structure.This function could (but doesn¡¯t need to) use the first
version internally.
Put together a multifile program based on this header. One file, named golf.cpp,
should provide suitable function definitions to match the prototypes in the header
file.A second file should contain main() and demonstrate all the features of the
prototyped functions. For example, a loop should solicit input for an array of golf
structures and terminate when the array is full or the user enters an empty string
for the golfer¡¯s name.The main() function should use only the prototyped functions
to access the golf structures.
*/

#include <iostream>
#include "golf.h"
using namespace std;

int main() {
  golf g1;
  char * name = "hell world";
  setgolf(g1, name, 3);

  golf g2;
  int n = setgolf(g2);

  showgolf(g1);
  showgolf(g2);
  if (n == 0) {
    cout << "name is blank, and the return value of setgolf is " << n << endl;
  } else {
    cout << "name is not blank, and the return value of setgolf is " << n << endl;
  }

  cout << endl << "setting handicap to 0" << endl
       << "now information in golf structure is: " << endl;
  handicap(g2, 0);
  showgolf(g2);
  return 0;
}
