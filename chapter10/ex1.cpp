/*
Provide method definitions for the class described in Chapter Review Question 5
and write a short program that illustrates all the features.


Review Question 5

Define a class to represent a bank account. Data members should include the
depositor’s name, the account number (use a string), and the balance. Member functions
should allow the following:
  Creating an object and initializing it.
  Displaying the depositor’s name, account number, and balance
  Depositing an amount of money given by an argument
  Withdrawing an amount of money given by an argument
 */

#include <iostream>
#include "ex1BankAccount.h"

int main() {
  using std::cout;

  cout << "Using constructors to creat new objects\n";
  BankAccount b1("JNU", "234", 12345.0);
  b1.show();

  BankAccount b2=BankAccount("SCAU", "0123", 23456.0);
  b2.show();

  cout << "Deposite money to b1\n";
  b1.deposite(100.2);
  b1.show();

  cout << "withdraw money from b2\n";
  b2.withdraw(50.1);
  b2.show();

  return 0;
}
