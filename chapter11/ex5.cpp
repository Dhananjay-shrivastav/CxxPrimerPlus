/*
Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it has a state member
that governs whether the object is interpreted in stone form, integer pounds form,
or floating-point pounds form. Overload the << operator to replace the
show_stn() and show_lbs() methods. Overload the addition, subtraction, and
multiplication operators so that one can add, subtract, and multiply Stonewt values.
Test your class with a short program that uses all the class methods and friends.
*/

// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "ex5stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
  Stonewt incognito = 275; // uses constructor to initialize
  Stonewt wolfe(285.7); // same as Stonewt wolfe = 285.7;
  Stonewt taft(21, 8);
  cout << "The celebrity weighed ";
  // incognito.show_stn();
  cout << incognito;
  cout << "The detective weighed ";
  // wolfe.show_stn();
  cout << wolfe;
  cout << "The President weighed ";
  // taft.show_lbs();
  cout << taft;
  incognito = 276.8; // uses constructor for conversion
  taft = 325; // same as taft = Stonewt(325);
  cout << "After dinner, the celebrity weighed ";
  // incognito.show_stn();
  cout << incognito;
  cout << "After dinner, the President weighed ";
  //taft.show_lbs();
  cout << taft;

  cout << "President - celebrity weighed ";
  cout << taft - incognito;

  cout << "President + celebrity weighed ";
  cout << taft + incognito;

  cout << "President * 3 weighed: ";
  cout << taft * 3;
  cout << 3 * taft;

  display(taft, 2);
  cout << "The wrestler weighed even more.\n";
  display(422, 2);
  cout << "No stone left unearned\n";
  return 0;
}

void display(const Stonewt & st, int n)
{
  for (int i = 0; i < n; i++)
    {
      cout << "Wow! ";
      cout << st;
      //st.show_stn();
    }
}

