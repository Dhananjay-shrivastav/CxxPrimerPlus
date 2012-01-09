// Ex3 in Chapter 2

/* Write a C++ program that uses three user-defined functions (counting main() as one)
and produces the following output:
Three blind mice
Three blind mice
See how they run
See how they run
One function, called two times, should produce the first two lines, and the remaining
function, also called twice, should produce the remaining output.
*/

#include<iostream>

using namespace std;

void saymice(void);
void sayrun(void);

int main() {
  saymice();
  saymice();
  sayrun();
  sayrun();
  return(0);
}

void saymice(void) {
  cout << "Three blind mice" << endl;
}

void sayrun(void) {
  cout << "See how they run" << endl;
}
