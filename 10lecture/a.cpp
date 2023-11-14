#include <iostream>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  string currentWord = "";
  bool containsDigit = false;
  for(int i = 0; i < s.size(); i++) {
    currentWord += s[i];
    if(isdigit(s[i])) containsDigit = true;

    if(s[i] == ' ' && !containsDigit) {
      cout << currentWord << endl;
      currentWord = "";
      containsDigit = false;
    }
  }
  return 0;
}