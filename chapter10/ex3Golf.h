#ifndef Golf_H_
#define Golf_H_


class Golf {
 private:
  static const int Len = 40;
  char fullname[Len];
  int handicap;
 public:
  Golf(const char * fn = "HI", const int h=0);
  void setgolf();
  void show();
};

#endif
