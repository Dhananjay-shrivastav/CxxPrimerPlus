#include <iostream>
#include "ex1BankAccount.h"

using std::string;

BankAccount::BankAccount() {
  std::cout << "Default constructor called\n";
  name = "no name";
  number = "0";
  balance = 0.0;
}

BankAccount::BankAccount(const string & nam, const string & num, double bal) {
  std::cout << "Constructor using " << nam << " called\n";
  name = nam;
  number = num;
  balance = bal;
}

// class destructor
BankAccount::~BankAccount() {
  std::cout << "Bye, " << name << "!\n";
}


// other methods
void BankAccount::show() {
  std::cout << "Depositor's name\t" << name << std::endl
	    << "Account number\t" << number << std::endl
	    << "Balance\t" << balance << std::endl;
}

void BankAccount::deposite(double n) {
  balance += n;
}

void BankAccount::withdraw(double n) {
  balance -= n;
}
