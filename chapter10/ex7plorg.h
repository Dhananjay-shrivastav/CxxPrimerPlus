#ifndef PLORG_H_
#define PLORG_H_

class Plorg {
 private:
  static const int len=19;
  char name[len];
  int ci;
 public:
  Plorg(const char * n = "Plorga", const int c=50);
  void updateCI(int c);
  void show() const;
};

#endif
