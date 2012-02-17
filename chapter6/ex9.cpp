/*
Do Programming Exercise 6, but modify it to get information from a file. The first item
in the file should be the number of contributors, and the rest of the file should consist of
pairs of lines, with the first line of each pair being a contributor¡¯s name and the second
line being a contribution. That is, the file should look like this:
4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
55000
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Contributor {
  string name;
  double contribution;
};

int main(){
  ifstream inFile;
  inFile.open("ex9ContributorInfo.txt");
  
  int n;
  inFile >> n;
  Contributor * donor;
  donor = new Contributor [n];
  
  for (int i=0; i<n; i++) {
    inFile.get(); // drop the return character
    getline(inFile, donor[i].name);
    inFile >> donor[i].contribution;
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
