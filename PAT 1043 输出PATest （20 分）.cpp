

#include <iostream>
#include<map>
#include<cctype>
using namespace std;
int main() {
  map<char,int>s;
  char c;
  while((c = cin.get()) != EOF){
    if(isalpha(c)) s[c]++;
  };
 
  while (s['P'] > 0 || s['A'] > 0 || s['T'] > 0 || s['e'] > 0 || s['s'] > 0 || s['t'] > 0) {
    if (s['P']-- >0) cout << 'P';//大于0
    if (s['A']-- >0) cout << 'A';
    if (s['T']-- >0) cout << 'T';
    if (s['e']-- >0) cout << 'e';
    if (s['s']-- >0) cout << 's';
    if (s['t']-- >0) cout << 't';
  }
  return 0;
}
