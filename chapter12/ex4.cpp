/*
4. Consider the following variation of the Stack class defined in Listing 10.10:
    // stack.h -- class declaration for the stack ADT
    typedef unsigned long Item;
    class Stack
    {
        private:
        enum {MAX = 10}; // constant specific to class
        Item * pitems; // holds stack items
        int size; // number of elements in stack
        int top; // index for top stack item
        public:
        Stack(int n = 10); // creates stack with n elements
        Stack(const Stack & st);
        ~Stack();
        bool isempty() const;
        bool isfull() const;
        // push() returns false if stack already is full, true otherwise
        bool push(const Item & item); // add item to stack
        // pop() returns false if stack already is empty, true otherwise
        bool pop(Item & item); // pop top into item
        Stack & operator=(const Stack & st);
    };
As the private members suggest, this class uses a dynamically allocated array to hold the
stack items. Rewrite the methods to fit this new representation and write a program that
demonstrates all the methods, including the copy constructor and assignment operator.
*/

#include<iostream>
#include<cctype>
using namespace std;

typedef unsigned long Item;
class Stack {
private:
  enum {MAX = 10}; // constant specific to class
  Item * pitems; // holds stack items
  int size; // number of elements in stack
  int top; // index for top stack item
public:
  Stack(int n = 10); // creates stack with n elements
  Stack(const Stack & st);
  ~Stack();
  bool isempty() const;
  bool isfull() const;
  // push() returns false if stack already is full, true otherwise
  bool push(const Item & item); // add item to stack
  // pop() returns false if stack already is empty, true otherwise
  bool pop(Item & item); // pop top into item
  Stack & operator=(const Stack & st);
};

int main() {
  Stack st(20);
  char ch;

  unsigned long po;

  cout << "Please enter A to add a purchase order,\n"
       << "P to process a PO, or Q to quit.\n";
  while (cin >> ch && toupper(ch) != 'Q') {
    while (cin.get() != '\n')
      continue;
    if (!isalpha(ch)) {
      cout << '\a';
      continue;
    }
    switch(ch){
    case 'A':
    case 'a': cout << "Enter a PO number to add: ";
      cin >> po;
      if (st.isfull())
	cout << "stack already full\n";
      else
	st.push(po);
      break;
    case 'P':
    case 'p': if (st.isempty())
	cout << "stack already empty\n";
      else {
	st.pop(po);
	cout << "PO #" << po << " popped\n";
      }
      break;
    }
    cout << "Please enter A to add a purchase order,\n"
	 << "P to process a PO, or Q to quit.\n";
  }
  cout << "Bye\n";

  Stack st2(st);
  Stack st3;
  st3 = st;

  if (! st2.isempty() ) {
    st2.pop(po);
    cout << po << " poped in st2" << endl;
  }

  if (! st3.isempty() ) {
    st3.pop(po);
    cout << po << " poped in st3" << endl;
  }

  return 0;
}


Stack::Stack(int n) {
  pitems = new Item[n];
  top = 0;
  size = n;
}

Stack::Stack(const Stack & st) {
  size = st.size;
  top = st.top;
  pitems = new Item[size];
  for (int i=0; i<size; i++) {
    pitems[i] = st.pitems[i];
  }
}

Stack::~Stack() {
  delete [] pitems;
}

bool Stack::isempty() const {
  return top == 0;
}

bool Stack::isfull() const {
  return top == MAX;
}

bool Stack::push(const Item & item) {
  if (top < MAX) {
    pitems[top++] = item;
    return true;
  } else
    return false;
}

bool Stack::pop(Item & item) {
  if (top > 0) {
    item = pitems[--top];
    return true;
  } else
    return false;
}

Stack & Stack::operator=(const Stack & st) {
  if (this == &st)
    return *this;

  top = st.top;
  size = st.size;
  delete [] pitems;
  pitems = new Item[size];
  for (int i=0;i<size;i++) {
    pitems[i] = st.pitems[i];
  }
  return *this;
}

