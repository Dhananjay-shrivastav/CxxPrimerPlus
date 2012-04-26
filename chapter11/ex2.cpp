/*
Modify the Vector class header and implementation files (Listings 11.13 and 11.14)
so that the magnitude and angle are no longer stored as data components. Instead,
they should be calculated on demand when the magval() and angval() methods
are called.You should leave the public interface unchanged (the same public methods
with the same arguments) but alter the private section, including some of the
private method and the method implementations.Test the modified version with
Listing 11.15, which should be left unchanged because the public interface of the
Vector class is unchanged.
*/


// Listing 11.15
//
// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file

#include <iostream>
#include <fstream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype
#include "ex2vect.h"
int main() {
   using namespace std;
   ofstream fout;
   fout.open("ex1_output.txt");
   using VECTOR::Vector;
   srand(time(0)); // seed random-number generator
   double direction;
   Vector step;
   Vector result(0.0, 0.0);
   unsigned long steps = 0;
   double target;
   double dstep;
   cout << "Enter target distance (q to quit): ";

   while (cin >> target) {
     cout << "Enter step length: ";
     if (!(cin >> dstep))
       break;
     fout << "Target Distance: " << target
	  << ", Step Size: " << dstep << endl;
     while (result.magval() < target) {
       fout << steps << ": " << result << endl;
       direction = rand() % 360;
       step.reset(dstep, direction, Vector::POL);
       result = result + step;

       steps++;
     }
     fout << "After " << steps << " steps, the subject "
	  << "has the following location:\n";
     fout << result << endl;
     result.polar_mode();
     fout << " or\n" << result << endl;
     fout << "Average outward distance per step = "
	  << result.magval()/steps << endl;
     steps = 0;
     result.reset(0.0, 0.0);
     cout << "Enter target distance (q to quit): ";
   }
   cout << "Bye!\n";
   cin.clear();
   while (cin.get() != '\n')
     continue;
   return 0;
 }
