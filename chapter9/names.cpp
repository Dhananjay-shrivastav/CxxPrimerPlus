#include <iostream>
#include "namesp.h"

using namespace std;

namespace SALES {
  void setSales(Sales & s, const double ar[], int n) {
    double sum=0.0;
    double avg = 0.0;
    double max=0.0;
    double min=0.0;
    if (n < QUARTERS) {
      int i;
      for (i=0; i < n; i++) {
	s.sales[i] = ar[i];
	if (max < ar[i])
	  max = ar[i];
	if (min > ar[i])
	  min = ar[i];
	sum += ar[i];
      }
      avg = sum /n;
      for (; i < QUARTERS; i++) {
	s.sales[i] =0.0;
      }
    } else {
      for (int i=0; i < QUARTERS; i++) {
	s.sales[i] = ar[i];
	if (max < ar[i])
	  max = ar[i];
	if (min > ar[i])
	  min = ar[i];
	sum += ar[i];
      }
      avg = sum/QUARTERS;
    }
    
    s.average = avg;
    s.max = max;
    s.min = min;
  }

  void setSales(Sales & s) {
    cout << "Enter array of numbers: " << endl;
    int i=0;
    double sum=0.0;
    double avg = 0.0;
    double max = 0.0;
    double min = 0.0;
    while ( (cin >> s.sales[i]) && (i < QUARTERS) ) {
      if (max < s.sales[i])
	max = s.sales[i];
      if (min > s.sales[i])
	min = s.sales[i];
      sum += s.sales[i];
      i++;
    }
    avg = sum/i;
    if (i < QUARTERS) {
      for (; i < QUARTERS; i++) {
	s.sales[i] = 0.0;
      }
    }
    s.average = avg;
    s.max = max;
    s.min = min;
  }

  void showSales(const Sales & s) {
    cout << "Sales:\t" ;
    for (int i=0; i < QUARTERS; i++) {
      cout << s.sales[i] << "\t";
    }
    cout << endl << "Average:\t" << s.average << endl
    	 << "Max:\t" << s.max << endl
	 << "min:\t" << s.min << endl;
  }
}
