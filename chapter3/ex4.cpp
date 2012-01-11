/*

4. Write a program that asks the user to enter the number of seconds as an integer value
(use type long) and that then displays the equivalent time in days, hours, minutes, and
seconds. Use symbolic constants to represent the number of hours in the day, the number of minutes in an hour, and the number of seconds in a minute. The output should
look like this:
Enter the number of seconds: 31600000
31600000 seconds = 365 days, 46 minutes, 40 seconds

*/

#include <iostream>

using namespace std;

int main(){
  const int HourPerDay = 24;
  const int MinPerHour = 60;
  const int SecPerMin = 60;

  cout << "Enter the number of seconds:";
  long input;
  cin >> input;
  
  long min = input / SecPerMin;
  int sec = input % SecPerMin;

  long hour = min / MinPerHour;
  int min_remain = min % MinPerHour;

  long day = hour / HourPerDay;
  int hour_remain = hour % HourPerDay;
  
  cout << input
       << " seconds = "
       << day
       << " days, "
       << hour_remain
       << " hours, "
       << min_remain
       << " minutes, "
       << sec
       << " seconds"
       << endl;
  
  return(0);
}
