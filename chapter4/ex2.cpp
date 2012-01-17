/* 
Rewrite Listing 4.4, using the C++ string class instead of char arrays.
*/

#include <iostream>
#include <string>
int main() {
  using namespace std;
  // const int ArSize = 20;
  // char name[ArSize];
  // char dessert[ArSize];
  string name;
  string dessert;
  cout << "Enter your name:\n";
  // cin.getline(name, ArSize); // reads through newline
  getline(cin, name);
  cout << "Enter your favorite dessert:\n";
  // cin.getline(dessert, ArSize);
  getline(cin, dessert);
  cout << "I have some delicious " << dessert;
  cout << " for you, " << name << ".\n";
  return 0;
}
