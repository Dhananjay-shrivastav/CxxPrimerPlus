/*
When you join the Benevolent Order of Programmers, you can be known at BOP meetings
by your real name, your job title, or your secret BOP name. Write a program that
can list members by real name, by job title, by secret name, or by a member¡¯s preference.
Base the program on the following structure:
// Benevolent Order of Programmers name structure
struct bop {
char fullname[strsize]; // real name
char title[strsize]; // job title
char bopname[strsize]; // secret BOP name
int preference; // 0 = fullname, 1 = title, 2 = bopname
};
In the program, create a small array of such structures and initialize it to suitable values.
Have the program run a loop that lets the user select from different alternatives:
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Note that "display by preference" does not mean display the preference member; it
means display the member corresponding to the preference number. For instance, if
preference is 1, choice d would display the programmer¡¯s job title. A sample run may
look something like the following:
Benevolent Order of Programmers Report
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee
LOOPY
Next choice: q
Bye!
*/

#include <iostream>
using namespace std;

const int strsize=30;

struct bop {
  char fullname[strsize]; // real name
  char title[strsize]; // job title
  char bopname[strsize]; // secret BOP name
  int preference; // 0 = fullname, 1 = title, 2 = bopname
};

void display(char ch, bop bb[], int size);
void displayPref(bop bb[], int size);


int main() {
  const int size = 5;
  bop bb[5] = {
    {"Wimp Macho", "Mr.", "wm", 0},
    {"Raki Rhodes", "Dr.", "R2", 1},
    {"Celia Laiter", "Ms.", "cleia", 2},
    {"Hoppy Hipman", "Miss", "hip", 1},
    {"Pat Hand", "Mr.", "pat", 0}
  };

  cout << "Benevolent Order of Programmers Report" << endl
       << "a. display by name" << "\t" << "b. display by title" << endl
       << "c. display by bopname" << "\t" << "d. display by preference" << endl
       << "q. quit" << endl;

  cout << "Enter your choice: ";
  char choice;
  cin >> choice;
  
  while(choice != 'q') {
    display(choice, bb, size);
    cout << "Next choice: ";
    cin >> choice;
  }
  
  cout << "Bye!" << endl;
  return 0;
}


void display(char ch, bop bb[], int size) {
  for (int i=0; i < size; i++) {
    switch(ch) {
    case 'a' : cout << bb[i].fullname << endl;
      break;
    case 'b' : cout << bb[i].title << endl;
      break;
    case 'c' : cout << bb[i].bopname << endl;
      break;
    case 'd' : displayPref(bb, i);
      break;
    }
  }
}

void displayPref(bop bb[], int i) {
  int p = bb[i].preference;
  switch(p) {
  case 0: cout << bb[i].fullname << endl; 
    break;
  case 1: cout << bb[i].title << endl;
    break;
  case 2: cout << bb[i].bopname << endl;
    break;
  }
  
}
