/*
Write a program that uses the following functions:
Fill_array() takes as arguments the name of an array of double values and an array
size. It prompts the user to enter double values to be entered in the array. It ceases taking
input when the array is full or when the user enters non-numeric input, and it
returns the actual number of entries.
Show_array() takes as arguments the name of an array of double values and an array
size and displays the contents of the array.
Reverse_array() takes as arguments the name of an array of double values and an
array size and reverses the order of the values stored in the array.
The program should use these functions to fill an array, show the array, reverse the array,
show the array, reverse all but the first and last elements of the array, and then show the
array.
*/

#include <iostream>
using namespace std;

int Fill_array(double arr [], int size);
void Show_array(double *arr, int size);
void Reverse_array(double *arr, int size);

int main() {
  const int Size = 20;
  double arr [20];
  int size = Fill_array(arr, Size);
  Show_array(arr, size);
  Reverse_array(arr, size);
  Show_array(arr, size);
  Reverse_array(arr + 1, size - 2);
  Show_array(arr, size);
  return 0;
}

void Reverse_array(double *arr, int size) {
  double temp;
  for (int i=0; i <= size/2; i++) {
    temp = arr[i];
    arr[i] = arr[size-i-1];
    arr[size-i-1] = temp;
  }
}

void Show_array(double *arr, int size) {
  for (int i=0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int Fill_array(double arr [], int size) {
  int i;
  for ( i=0; i < size; i++) {
    cout << "Enter value #" << (i+1) << ": ";
    cin >> arr[i];
    if (!cin) {
      break;
    }
  }
  return i;
}
