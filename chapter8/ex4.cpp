/*
The following is a program skeleton:
#include <iostream>
using namespace std;
#include <cstring> // for strlen(), strcpy()
struct stringy {
char * str; // points to a string
int ct; // length of string (not counting '\0')
};
// prototypes for set(), show(), and show() go here
int main()
{
stringy beany;
char testing[] = "Reality isn't what it used to be.";
set(beany, testing); // first argument is a reference,
// allocates space to hold copy of testing,
// sets str member of beany to point to the
// new block, copies testing to new block,
// and sets ct member of beany
show(beany); // prints member string once
show(beany, 2); // prints member string twice
testing[0] = 'D';
testing[1] = 'u';
show(testing); // prints testing string once
show(testing, 3); // prints testing string thrice
show("Done!");
return 0;
}
Complete this skeleton by providing the described functions and prototypes. Note that
there should be two show() functions, each using default arguments. Use const arguments
when appropriate. Note that set() should use new to allocate sufficient space to
hold the designated string. The techniques used here are similar to those used in designing
and implementing classes. (You might have to alter the header filenames and delete
the using directive, depending on your compiler.)
*/

#include <iostream>
using namespace std;
#include <cstring> // for strlen(), strcpy()
struct stringy {
  char * str; // points to a string
  int ct; // length of string (not counting '\0')
};

// prototypes for set(), show(), and show() go here
void set(stringy & sy, const char * ch);
void show(const stringy & sy, int n = 1);
void show(const string & s, int n=1);

int main()
{
  stringy beany;
  char testing[] = "Reality isn't what it used to be.";
  set(beany, testing); // first argument is a reference,
  // allocates space to hold copy of testing,
  // sets str member of beany to point to the
  // new block, copies testing to new block,
  // and sets ct member of beany

  show(beany); // prints member string once

  show(beany, 2); // prints member string twice
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing); // prints testing string once
  show(testing, 3); // prints testing string thrice
  show("Done!");


  return 0;
}

void set(stringy & sy, const char * ch){
  int length=0;
  while(ch[length] != '\0') {
    length++;
  }
  char * p = new char [length+1];
  int i;
  for (i=0; i < length; i++) {
    p[i] = ch[i];
  }
  p[i] = '\0';
  sy.ct = length;
  sy.str = p;
}

void show(const stringy & sy, int n) {
  for (int i=0; i < n; i++) {
    cout << sy.str << endl;;
  }
}

void show(const string & s, int n) {
  for (int i=0; i < n; i++) {
    cout << s << endl;
  }
}
