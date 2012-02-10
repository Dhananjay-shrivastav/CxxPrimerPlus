/*
Write a precursor to a menu-driven program. The program should display a menu offering
four choices, each labeled with a letter. If the user responds with a letter other than
one of the four valid choices, the program should prompt the user to enter a valid
response until the user complies. Then the program should use a switch to select a simple
action based on the user¡¯s selection. A program run could look something like this:
Please enter one of the following choices:
c) carnivore p) pianist
t) tree g) game
f
Please enter a c, p, t, or g: q
Please enter a c, p, t, or g: t
A maple is a tree.
*/

#include <iostream>

using namespace std;

void getInput(void);
void display(void);

int main() {
  getInput();
  display();
  return 0;
}

void getInput(void) {
  cout << "Please enter one of the following choices:" << endl
       << "c) carnivore" << "\t"
       << "p) pianist" << endl
       << "t) tree" << "\t"
       << "g) game" << endl;
}

void display(void) {
  char choice;
  cin >> choice;
  switch(choice) {
  case 'c': cout << "Tiger is carnivore." << endl;
    break;
  case 'p': cout << "I am not the panist." << endl;
    break;
  case 't': cout << "A maple is a tree." << endl;
    break;
  case 'g': cout << "I play supertux in linux." << endl;
    break;
  default: cout << "Please enter a c, p, t, or g: " ;
    display();
  }  
}
