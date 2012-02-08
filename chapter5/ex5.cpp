/*
Do Programming Exercise 4,but use a two-dimensional 
array to store input for 3 years of monthly sales. 
Report the total sales for each individual year and 
for the combined years.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
  int sales[3][12];

  string month[12] = {
    "Jan", "Feb", "Mar", "Apr",
    "May", "Jun", "Jul", "Aug",
    "Sep", "Oct", "Nov", "Dec"};
  
  int sum[3] = {0,0,0};
  
  for (int i=0; i < 3; i++) {
    for (int j=0; j < 12; j++) {
      cout << "The number of books sales in "
	   << month[j] 
	   << " of year "
	   << i << " : ";
      cin >> sales[i][j];
      sum[i] += sales[i][j];
    }
  }

  int overallsum = 0;
  for (int i=0; i<3; i++) {
    cout << "Total sales of year "
	 << i << " is "
	 << sum[i] << "." << endl;
    overallsum += sum[i];
  }

  cout << "Total sales of all these three years is "
       << overallsum << "." << endl;
  return(0);
}
