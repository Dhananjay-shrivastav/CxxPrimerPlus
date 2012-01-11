/*

2. Write a short program that asks for your height in feet and inches and your weight in
pounds. (Use three variables to store the information.) Have the program report your
body mass index (BMI). To calculate the BMI, first convert your height in feet and inches
to your height in inches (1 foot = 12 inches). Then, convert your height in inches to
your height in meters by multiplying by 0.0254. Then, convert your weight in pounds
into your mass in kilograms by dividing by 2.2. Finally, compute your BMI by dividing
your mass in kilograms by the square of your height in meters. Use symbolic constants
to represent the various conversion factors.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
  cout << "Enter your height in feet and inches:" << endl;

  cout << "First, enter the feet:";
  int feet;
  cin >> feet;

  cout << "Second, enter the inches:";
  int inch;
  cin >> inch;

  cout << "Enter your weight in pounds:";
  int pounds;
  cin >> pounds;
  
  const int inchesPerFoot = 12;
  int inches = feet * inchesPerFoot + inch;
  
  const float meterPerInch = 0.0254;
  float meters = inches * meterPerInch;

  const float poundsPerKg = 2.2;
  float weight = pounds / poundsPerKg;
  
  float bmi = weight/sqrt(meters);

  cout << endl
       << "Your Body Mass Index (BMI) is: "
       << bmi
       << endl;
  return(0);
}
