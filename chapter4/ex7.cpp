/* 
William Wingate runs a pizza-analysis service. For each pizza, he needs to record the following
information:
 The name of the pizza company, which can consist of more than one word
 The diameter of the pizza
 The weight of the pizza
Devise a structure that can hold this information and write a program that uses a structure
variable of that type. The program should ask the user to enter each of the preceding
items of information, and then the program should display that information. Use cin
(or its methods) and cout.
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
  sPizza pizza;
  cout << "Enter the pizza company name: ";
  getline(cin, pizza.name);
  cout << "Enter the diameter of pizza: ";
  cin >> pizza.diameter;
  cout << "Enter the weight of pizza: ";
  cin >> pizza.weight;

  cout << "Pizza Company: " << pizza.name << endl
       << "Pizza Diameter: " << pizza.diameter << endl
       << "Pizza Weight: " << pizza.weight << endl;

  return 0;
}
