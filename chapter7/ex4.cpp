/*
Many state lotteries use a variation of the simple lottery portrayed by Listing 7.4. In
these variations you choose several numbers from one set and call them the field numbers.
For example, you might select 5 numbers from the field of 1¨C47). You also pick a
single number (called a mega number or a power ball, etc.) from a second range, such as
1¨C27. To win the grand prize, you have to guess all the picks correctly. The chance of
winning is the product of the probability of picking all the field numbers times the probability
of picking the mega number. For instance, the probability of winning the example
described here is the product of the probability of picking 5 out of 47 correctly times the
probability of picking 1 out of 27 correctly. Modify Listing 7.4 to calculate the probability
of winning this kind of lottery.
*/

#include <iostream>
using namespace std;

long double prob(unsigned number, unsigned pick, unsigned meganum);

int main() {
  unsigned total, choice, mega;
  cout << "Enter the total number in the field, numbers of picks allowed, and the mega number: ";
  cin >> total >> choice >> mega;
  long double res;
  res = prob(total, choice, mega);
  cout << "You have one chance in " << res << " of wining." << endl;
  return 0;
}

long double prob(unsigned number, unsigned pick, unsigned meganum) {
  long double result = 1.0;
  for ( ; pick > 0; pick--, number--) {
    result *= number/pick;
  }
  result *= meganum;
  return result;
}
