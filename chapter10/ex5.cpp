/*
Consider the following structure declaration:
struct customer {
char fullname[35];
double payment;
};
Write a program that adds and removes customer structures from a stack, represented
by a Stack class declaration. Each time a customer is removed, his or her
payment should be added to a running total, and the running total should be
reported. Note: You should be able to use the Stack class unaltered; just change the
typedef declaration so that Item is type customer instead of unsigned long.
*/

#include <iostream>
#include <cctype>
#include "ex5stack.h"

using namespace std;

int main() {
  Stack st; // create an empty stack;
  char ch;
  customer po;
  double runtotal = 0;
  cout << "Please enter A to add a customer,\n"
       << "R to remove a custome from stack, "
       << "or Q to quit." << endl;
  while(cin >> ch && toupper(ch) != 'Q'){
    while (cin.get() != '\n')
      continue;
    if(!isalpha(ch)) {
      cout << '\a';
      continue;
    }
    switch(ch) {
    case 'A':
    case 'a':
      cout << "Enter a customer's FULL NAME: ";
      cin.getline(po.fullname, 35);
      cout << "Enter a payment for " << po.fullname << ": ";
      cin >> po.payment;
      if (st.isfull()) 
	cout << "stack already full\n";
      else 
	st.push(po);
      break;
    case 'R':
    case 'r':
      if (st.isempty())
	cout << "stack already empty\n";
      else {
	st.pop(po);
	runtotal += po.payment;
	cout << "Customer " << po.fullname 
	     << " with payment of " << po.payment
	     << " is removed\n";
      }
      break;
    }
    cout << "Please enter A to add a customer,\n"
	 << "R to remove a custome from stack, "
	 << "or Q to quit." << endl;
  }
  cout << "\nRunning Total = " << runtotal
       << "\nBye\n";
  return 0;
}
