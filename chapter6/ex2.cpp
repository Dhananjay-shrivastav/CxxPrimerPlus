/*
Write a program that reads up to 10 donation values into an array of double. The program
should terminate input on non-numeric input. It should report the average of the
numbers and also report how many numbers in the array are larger than the average.
*/

#include <iostream>

using namespace std;

const int SIZE = 10;

int main() {
  double dval [SIZE];
  double tmp;
  cout << "Enter ten number: ";
  
  double avg = 0.0;
  int i;
  for (i=0; i < SIZE && cin >> tmp; i++) {
    dval[i] = tmp;
    avg += tmp;
  }
  
  avg /= i;

  int n=0;
  for (int j=0; j < i; j++) {
    if (dval[j] > avg) 
      n++;
  }
  cout << "The average of the nubers is " << avg << endl
  << "There are " << n << " numbers in the array are larger than " << avg << endl;
  
  return 0;
}
