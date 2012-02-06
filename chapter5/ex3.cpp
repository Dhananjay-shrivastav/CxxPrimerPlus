/*
Daphne invests $100 at 10% simple interest. That is, every year, the investment earns
	10% of the original investment, or $10 each and every year:
	interest = 0.10 x original balance
	At the same time, Cleo invests $100 at 5% compound interest. That is, interest is 5% of
	the current balance, including previous additions of interest:
	interest = 0.05 x current balance
	Cleo earns 5% of $100 the first year, giving her $105. The next year she earns 5% of
	$105, or $5.25, and so on. Write a program that finds how many years it takes for the
	value of Cleo's investment to exceed the value of Daphne's investment and then displays
	the value of both investments at that time.
*/

#include <iostream>

using namespace std;

int main() {
  float investmentDaphne = 0.0, investmentCleo = 0.0;
  float balanceDaphne = 100.0, balanceCleo = 100.0;
  const float rateDaphne = 0.10, rateCleo = 0.05;
  
  int year = 0;
  float original_balanceCleo=balanceCleo;
  while (investmentCleo <= investmentDaphne){
    investmentDaphne += rateDaphne * balanceDaphne;
    investmentCleo += rateCleo * balanceCleo;
    //cout << balanceDaphne << "\t" << investmentDaphne << "\t" << balanceCleo <<"\t" <<investmentCleo << "\t" << year << endl;
    balanceCleo += rateCleo * balanceCleo;
    year++;
  }
  cout << "It tooks " << year << " years for investment of Cleo (" << investmentCleo 
       << ") to exceed the investment of Daphne (" << investmentDaphne << ")." << endl;
  return (0);
}
