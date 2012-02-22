/*
Here is a structure declaration:
struct box
{
char maker[40];
float height;
float width;
float length;
float volume;
};
a. Write a function that passes a box structure by value and that displays the value of
each member.
b. Write a function that passes the address of a box structure and that sets the volume
member to the product of the other three dimensions.
c. Write a simple program that uses these two functions.
*/

#include <iostream>
using namespace std;

struct box {
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void displayBox (box b);
void setVolume (box * pb);

int main() {
  box bb = { 
    "Jinan University",
    3.4,
    4.5,
    5.6,
    0.0
  };
  setVolume(&bb);
  displayBox(bb);
  return 0;
}

void setVolume (box * pb) {
  pb->volume =
    pb->height * pb->width * pb->length;
}

void displayBox (box b) {
  cout << "Maker:\t" << b.maker << endl
       << "Height:\t" << b.height << endl
       << "Width:\t" << b.width << endl
       << "Length:\t" << b.length << endl
       << "Volume:\t" << b.volume << endl;
}
