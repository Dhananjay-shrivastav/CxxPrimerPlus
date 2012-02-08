/* 
You sell the book C++ for Fools.Write a program that has you 
enter a year’s worth of monthly sales (in terms of number 
of books, not of money). The program should use a loop to 
prompt you by month,using an array of char *(or an array 
of string objects,if you prefer) initialized to the month 
strings and storing the input data in an array of int. 
Then, the program should find the sum of the array 
contents and report the total sales for the year.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  int sales[12];
  string month[12] = {
    "Jan", "Feb", "Mar", "Apr",
    "May", "Jun", "Jul", "Aug",
    "Sep", "Oct", "Nov", "Dec"};
  
  int sum = 0;
  for (int i=0; i < 12; i++) {
    cout << "The number of books sales in " 
	 << month[i] << ": ";
    
    cin >> sales[i];
    sum += sales[i];
    
  }

  cout << "Total sales of this year is " 
       << sum << "." << endl;

  return (0);
}
