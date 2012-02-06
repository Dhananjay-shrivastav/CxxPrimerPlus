/*Write a program that asks the user to type in numbers. After each entry, the program
should report the cumulative sum of the entries to date. The program should terminate
when the user enters 0.*/

#include <iostream>

using namespace std;

int main() {
  int n;
  int sum=0;
  do {
    cout << "Enter integer number: ";
    cin >> n;
    sum +=n;
    cout << "The cumulative sum of the entries to date is :"
	 << sum << endl;
    } while (n != 0);

    return (0);
}
