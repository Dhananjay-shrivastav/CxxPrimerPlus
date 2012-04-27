/*
Modify Listing 11.15 so that instead of reporting the results of a single trial for a
particular target/step combination, it reports the highest, lowest, and average number
of steps for N trials, where N is an integer entered by the user.
*/


// Listing 11.15
//
// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file


//
// compile using
//
// g++ ex3.cpp ex2vect.cpp
//

#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype
#include "ex2vect.h"
int main() {
   using namespace std;
   using VECTOR::Vector;
   srand(time(0)); // seed random-number generator
   double direction;
   Vector step;
   Vector result(0.0, 0.0);
   unsigned long steps = 0;
   double target;
   double dstep;

   int N;
   unsigned int maxsteps, minsteps, totalsteps =0;

   cout << "How many trials would you like to do: ";
   (cin >> N).get();

   while (N < 0 || N == 0) {
     cout << "Invalid response. So, how many trials ? (at least 1): ";
     (cin >> N).get();
   }

   for(int i = 0; i < N; i++) {
     cout << "Enter target distance: ";

     cin >> target;
     cout << "Enter step length: ";
     if (!(cin >> dstep))
       break;
     while (result.magval() < target) {
       direction = rand() % 360;
       step.reset(dstep, direction, Vector::POL);
       result = result + step;

       steps++;
     }
     result.polar_mode();

     totalsteps += steps;

     if (i == 0) {
       minsteps = steps;
       maxsteps=steps;
     }
     if (minsteps > steps) {
       minsteps = steps;
     }
     if (maxsteps < steps) {
       maxsteps = steps;
     }

     steps = 0;
     result.reset(0.0, 0.0);


   }
   cout << endl << "Total steps: " << totalsteps << endl
	<< "Lowest steps: " << minsteps << endl
	<< "Highest steps: " << maxsteps << endl
	<< "Average steps: " << totalsteps / N << endl
	<< endl << "Bye!" << endl;
   cin.clear();
   return 0;
}
