/*
Design a structure called car that holds the following information
 about an automobile: its make, as a string in a character array 
 or in a string object, and the year it was built, as an integer.
 Write a program that asks the user how many cars to catalog. 
 The program should then use new to create a dynamic array of 
 that many car structures. Next, it should prompt the user to 
 input the make (which might consist of more than one word) 
 and year information for each structure. Note that this 
 requires some care because it alternates reading strings 
 with numeric data (see Chapter 4). Finally, it should display 
 the contents of each structure. A sample run should look 
 something like the following:

How many cars do you wish to catalog? 2 
Car #1: 
Please enter the make: Hudson Hornet 
Please enter the year made: 1952
Car #2: Please enter the make: Kaiser 
Please enter the year made: 1951 
Here is your collection: 
1952 Hudson Hornet 
1951 Kaiser 
*/

#include <iostream>
#include <string>

using namespace std;

struct car 
{
  // structure declaration
  string name;
  int year;
};

int main() {
  int n;
  cout << "How many cars do you wish to catalog? ";
  cin >> n;
  
  car * carInfo = new car [n];
  
  
  for (int i=0; i<n; i++){
    cout << "Car #" << i+1 << ":" << endl;
    cout << "Please enter the make: ";
    cin.get(); // drop the enter character
    getline(cin, carInfo[i].name);
        
    cout << "Please enter the year made: ";
    cin >> carInfo[i].year;
    
  }

  cout << "Here is your collection:" << endl;

  for (int i=0; i < n; i++) {
    cout << carInfo[i].year
	 << "\t"
	 << carInfo[i].name
	 << endl;
  }
  
  delete [] carInfo;
  return(0);
}
