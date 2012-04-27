/*
Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it overloads all six
relational operators.The operators should compare the pounds members and return
a type bool value.Write a program that declares an array of six Stonewt objects and
initializes the first three objects in the array declaration.Then it should use a loop
to read in values used to set the remaining three array elements.Then it should
report the smallest element, the largest element, and how many elements are greater
or equal to 11 stone. (The simplest approach is to create a Stonewt object initialized
to 11 stone and to compare the other objects with that object.)
 */

#include <iostream>
#include <string>

using namespace std;

struct Contributor {
  string name;
  double contribution;
};

int main(){
  int n;
  cout << "Enter the number of contributors: ";
  cin >> n;
  Contributor * donor;
  donor = new Contributor [n];
  
  for (int i=0; i<n; i++) {
    cout << "Enter the name of the " << i+1 << "'s contributor: ";
    cin.get(); // drop the return character
    getline(cin, donor[i].name);
    cout << "Enter the contribution of the " << i+1 << "'s contributor: ";
    cin >> donor[i].contribution;
  }
  cout << "Grand Patrons:" << endl;
  for (int i=0; i<n; i++) {
    if (donor[i].contribution >= 10000) {
      cout << "\t" << donor[i].name << "\t" << donor[i].contribution << endl;
    }
  }
  cout << "Patrons:" << endl;
  for (int i=0; i<n; i++) {
    if (donor[i].contribution < 10000) {
      cout << "\t" << donor[i].name << "\t" << donor[i].contribution << endl;
    }
  }
  
  return 0;
}
