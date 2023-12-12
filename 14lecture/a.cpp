// ababbababa
// aba
// 0 5 7

#include <iostream>
using namespace std;

int main() {
  string s, target;
  cin >> s >> target;

  int counter = 0;

  for(int i = 0; i < s.size(); i++) {
    string subst = s.substr(i, target.size());
    if(subst == target) {
      counter++;
      cout << i << " ";
    }
  }
  
  return 0;
}