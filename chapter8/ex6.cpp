/*
Write a template function maxn() that takes as its arguments an array of items of type T
and an integer representing the number of elements in the array and that returns the
largest item in the array. Test it in a program that uses the function template with an
array of six int value and an array of four double values. The program should also
include a specialization that takes an array of pointers-to-char as an argument and the
number of pointers as a second argument and that returns the address of the longest
string. If multiple strings are tied for having the longest length, the function should
return the address of the first one tied for longest. Test the specialization with an array of
five string pointers.
*/

#include <iostream>
using namespace std;

template <class T>
T maxn(T a[], int n);

template <>
char * maxn<char *>(char * a[], int n);

int get_char_size(char * ch);


int main() {
  int a[6] = { 1,3,4, 6, 5,2};
  double b[4] = {1.1,4.4,3.3,2.2};
  char* ch[] = {"Yu", "JNU", "SCAU", "Guangzhou", "Jinan"};
  cout << maxn(a,6) << endl
       << maxn(b,4) << endl
       << maxn(ch,5) << endl;
  return 0;
}

template <class T>
T maxn(T a[], int n) {
  T max = a[0];
  for (int i=1; i < n; i++) {
    if (max < a[i]) {
      max = a[i];
    }
  }
  return max;
}

template <>
char * maxn<char *>(char * a[], int n) {
  int len;
  char * ps;
  len = get_char_size(a[0]);
  ps = a[0];
  for (int i=1; i < n; i++) {
    int size =  get_char_size(a[i]);
    if (len < size) {
      len = size;
      ps = a[i];
    }
  }
  return ps;
}

int get_char_size(char * ch) {
  int i;
  while (ch[i] != '\0') {
    i++;
  }
  return i;
}
