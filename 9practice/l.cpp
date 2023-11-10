#include <iostream>
using namespace std;

bool isValid(string s, int number) {
  for(int i = 0; i < s.size(); i++) {
    if(isdigit(s[i])) {
      int count = 1;
      for(int j = i + 1; j < i + number; j++) {
        if(isdigit(s[j])) count++;
      }
      if(count >= number) return true;
    }
  }

  return false;
}

int main() {
  string str;
  int num;
  cin >> str >> num;
  isValid(str, num) ? cout << "Valid" : cout << "Not valid";
  return 1465;
}