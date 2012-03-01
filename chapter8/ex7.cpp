/*
Modify Listing 8.14 so that the template functions return the sum of the array contents
instead of displaying the contents. The program now should report the total number of
things and the sum of all the debts.
*/

// tempover.cpp --- template overloading
#include <iostream>
template <typename T> // template A
void SumArray(T arr[], int n);
template <typename T> // template B
void SumArray(T * arr[], int n);

struct debts{
  char name[50];
  double amount;
};

int main(void) {
  using namespace std;
  int things[6] = {13, 31, 103, 301, 310, 130};
  struct debts mr_E[3] = {
      {"Ima Wolfe", 2400.0},
      {"Ura Foxe", 1300.0},
      {"Iby Stout", 1800.0}
  };
  double * pd[3];
  // set pointers to the amount members of the structures in the arr mr_E
  for (int i = 0; i < 3; i++)
    pd[i] = &mr_E[i].amount;
  cout << "Total Mr. E's counts of things:\n";
  // things is an array of int
  SumArray(things, 6); // uses template A
  cout << "Total Mr. E's debts:\n";
  // pd is an array of pointers to double
  SumArray(pd, 3); // uses template B (more specialized)
  return 0;
}

template <typename T>
void SumArray(T arr[], int n) {
  using namespace std;
  cout << "template A\n";
  T sum=0;
  for (int i = 0; i < n; i++)
    sum += arr[i];
  cout << sum << endl;
}

template <typename T>
void SumArray(T * arr[], int n){
  using namespace std;
  cout << "template B\n";
  T sum=0;
  for (int i = 0; i < n; i++)
    sum += *arr[i];
  cout << sum << endl;
}
