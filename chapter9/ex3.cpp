/*
Begin with the following structure declaration:
struct chaff
{
char dross[20];
int slag;
};
Write a program that uses placement new to place an array of two such structures in
a buffer.Then assign values to the structure members (remembering to use
strcpy() for the char array) and use a loop to display the contents. Option 1 is to
use a static array, like that in Listing 9.10, for the buffer. Option 2 is to use regular
new to allocate the buffer.
*/

#include <iostream>
#include <cstring>
using namespace std;

struct chaff {
  char dross[20];
  int slag;
};

int main() {
  chaff * cha = new chaff [2];
  strcpy(cha[0].dross, "Jinan");
  strcpy(cha[1].dross, "SCAU");

  cha[0].slag = 0;
  cha[1].slag = 1;

  for (int i=0; i < 2; i++) {
    cout << cha[0].dross << "\t" << cha[0].slag << endl
	 << cha[1].dross << "\t" << cha[1].slag << endl;
  }
  return 0;
}
