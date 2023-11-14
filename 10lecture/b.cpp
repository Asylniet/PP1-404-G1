#include <iostream>
using namespace std;

int main() {
  string s;
  char c;
  cin >> c >> s;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] != c) cout << s[i];
  }
  return 0;
}