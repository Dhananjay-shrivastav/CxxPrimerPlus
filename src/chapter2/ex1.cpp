// Exercise 1 in Chapter 2.
// Write a C++ program that displays your name and address.
#include<iostream>

using namespace std;

int main() {
  cout << "Enter your name and hit Enter: ";
  char name[100];
  cin.getline(name,99);
  
  cout << "Enter your address and hit Enter: ";
  char address[200];
  cin.getline(address,199);

  cout << "You are "
	<< name
	<<";"
	<< endl
	<< "you live in "
	<< address
	<< endl; 
  return(0);
}
