/*
Write a program that reads input a word at a time until a lone q is entered. The program
should then report the number of words that began with vowels, the number that began
with consonants, and the number that fit neither of those categories. One approach is to
use isalpha() to discriminate between words beginning with letters and those that
don't and then use an if or switch statement to further identify those passing the
isalpha() test that begin with vowels. A sample run might look like this:
Enter words (q to quit):
The 12 awesome oxen ambled
quietly across 15 meters of lawn. q
5 words beginning with vowels
4 words beginning with consonants
2 others
*/

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
const int vn=5;
const char vowel [vn] = {'a', 'e', 'i', 'o', 'u'};

int main() {
  cout << "Enter words (q to quit):"<< endl;
  int nVowel=0;
  int nConsonant =0;
  int nOther =0;
  char word[30];
  while(cin >> word) {
    if (isalpha(word[0])) {
      if (strlen(word) == 1 && word[0] == 'q') {
	break;
      } 

      char x = tolower(word[0]);
      int i;
      for (i=0; i < vn; i++) {
	if (x == vowel[i]) {
	  nVowel += 1;
	  break;
	}
      }
      if (i == vn) {
	nConsonant += 1;
      }
    } else {
      nOther += 1;
    }
  } 
  cout << nVowel << " words begining with vowels" << endl
       << nConsonant << " words begining with consonants" << endl
       << nOther << " others" << endl;
  return 0;
}
