/*
Write a template function max5() that takes as its argument an array of five items of type
T and returns the largest item in the array. (Because the size is fixed, it can be hard-coded
into the loop instead of being passed as an argument.) Test it in a program that uses the
function with an array of five int value and an array of five double values.
*/

#include <iostream>
using namespace std;

template <class T>
T max5(T a[]);

int main() {
  int a[5]={1,2,3,4,5};
  float b[5]={1.2,2.3,4.5,4.4,8.8};
  cout << max5(a) << endl
       << max5(b) << endl;
  return 0;
}

template <class T>
T max5(T a[]) {
  T max=a[0];
  for (int i=1; i <5; i++) {
    if (max < a[i]) {
      max = a[i];
    }
  }
  return max;
}
