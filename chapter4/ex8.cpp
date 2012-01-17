/*
Do Programming Exercise 7, but use new to allocate a structure instead of declaring a
structure variable. Also, have the program request the pizza diameter before it requests
the pizza company name.
*/

#include <iostream>
#include <string>

using namespace std;

struct sPizza {
  string name;
  double diameter;
  double weight;
};

int main() {
  sPizza * pp = new sPizza;
  cout << "Enter the pizza company name: ";
  getline(cin, pp->name);
  cout << "Enter the diameter of pizza: ";
  cin >> pp->diameter;
  cout << "Enter the weight of pizza: ";
  cin >> pp->weight;

  cout << "Pizza Company: " << pp->name << endl
       << "Pizza Diameter: " << pp->diameter << endl
       << "Pizza Weight: " << pp->weight << endl;
  delete pp;
  return 0;
}
