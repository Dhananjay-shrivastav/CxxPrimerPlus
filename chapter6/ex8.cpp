/*
Write a program that opens a text file, reads it character-by-character to the end of the
file, and reports the number of characters in the file.
*/

#include <iostream>
#include <fstream> // for file I/O

using namespace std;

int main() {
  ifstream inFile;
  inFile.open("ex6.cpp");
  char a;
  int n=0;
  do {
    inFile >> a;
    n += 1;
  } while(!inFile.eof());

  cout << n << endl;

  inFile.close();
  return 0;
}
