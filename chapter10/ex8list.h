#ifndef LIST_H_
#define LIST_H_

typedef int Item;

class List{
 private:
  enum {MAX = 20 }; 
  Item items[MAX];
  int top;
 public:
  List();
  bool isempty() const;
  bool isfull() const;
  bool add(const Item & item);
  void visit(void (*pf)(Item &));
};

#endif
