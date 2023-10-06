#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  s += ' ';
  int counter = 0;
  string word = "";
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == ' ' || s[i] == ',' || s[i] == '!' || s[i] == '.') {
      if(word.size() > 0) {
        cout << word << endl;
      }
      word = "";
    } else {
      word += s[i];
      counter++;
    }
  }
  cout << counter;
  // Custom erase implementation
  // string s2 = "";
  // for(int i = 0; i < s.size(); i++) {
  //   if(i < 6 || i >= 7) s2 += s[i];
  // }
  // cout << s2;
  return 0;
}