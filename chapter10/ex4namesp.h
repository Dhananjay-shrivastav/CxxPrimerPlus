namespace SALES {
  class Sales{
  private:
    static const int QUARTERS=4;
    double sales[QUARTERS];
    double average;
    double max;
    double min;
  public:
    Sales(const double ar[], int n);
    void setSales();
    void show();    
  };
}
