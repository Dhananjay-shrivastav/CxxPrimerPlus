/*

3. Write a program that asks the user to enter a latitude in degrees, minutes, and seconds
and that then displays the latitude in decimal format. There are 60 seconds of arc to a
minute and 60 minutes of arc to a degree; represent these values with symbolic constants.
You should use a separate variable for each input value. A sample run should
look like this:
Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees

*/


#include <iostream>

using namespace std;

int main(){
  const int min2sec = 60;
  const int deg2min = 60;
  
  cout << "Enter a latitude in degrees, minutes, and seconds:"
       << endl
       << "First, enter the degrees:";
  int degree;
  cin >> degree;
  
  cout << "Next, enter the minutes of arc:";
  int min;
  cin >> min;

  cout << "Finally, enter the seconds of arc:";
  int sec;
  cin >> sec;

  float min_f = min + float (sec)/min2sec;
  float deg_f = degree + min_f/deg2min;
  cout << endl
       << degree
       << " degrees, "
       << min
       << " minutes, "
       << sec
       << " seconds = "
       << deg_f
       << " degrees"
       << endl;
  return(0);
}
