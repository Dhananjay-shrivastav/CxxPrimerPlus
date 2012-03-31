#include <iostream>
#include "ex4namesp.h"

using namespace std;

namespace SALES {
  Sales::Sales(const double ar[], int n) {
    double sum=0.0;
    double avg = 0.0;
    double max=0.0;
    double min=0.0;
    if (n < QUARTERS) {
      int i;
      for (i=0; i < n; i++) {
	this->sales[i] = ar[i];
	if (max < ar[i])
	  max = ar[i];
	if (min > ar[i])
	  min = ar[i];
	sum += ar[i];
      }
      avg = sum /n;
      for (; i < QUARTERS; i++) {
	this->sales[i] =0.0;
      }
    } else {
      for (int i=0; i < QUARTERS; i++) {
	this->sales[i] = ar[i];
	if (max < ar[i])
	  max = ar[i];
	if (min > ar[i])
	min = ar[i];
	sum += ar[i];
      }
      avg = sum/QUARTERS;
    }
    
    this->average = avg;
    this->max = max;
    this->min = min;
  };
  
  void Sales::setSales() {
    cout << "Enter array of numbers: " << endl;
    int i=0;
    double ar[QUARTERS];
    if (i < QUARTERS) {
      cin >> ar[i];
      i++;
    }
    Sales st(ar, i+1);
    *this = st;  
  };

  
  void Sales::show() {
    cout << "Sales:\t";
    for (int i=0; i < QUARTERS; i++) {
      cout << sales[i] << "\t";
    }
    cout << endl
	 << "Average:\t" << average << endl
	 << "Max:\t" << max << endl
	 << "Min:\t" << min << endl;
}
  
}
  
