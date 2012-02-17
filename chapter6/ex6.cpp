/*
Put together a program that keeps track of monetary contributions to the Society for the
Preservation of Rightful Influence. It should ask the user to enter the number of contributors
and then solicit the user to enter the name and contribution of each contributor.
The information should be stored in a dynamically allocated array of structures. Each
structure should have two members: a character array (or else a string object) to store
the name and a double member to hold the amount of the contribution. After reading
all the data, the program should display the names and amounts donated for all donors
who contributed $10,000 or more. This list should be headed by the label Grand
Patrons. After that, the program should list the remaining donors. That list should be
headed Patrons. If there are no donors in one of the categories, the program should print
the word "none." Aside from displaying two categories, the program need do no sorting.
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
