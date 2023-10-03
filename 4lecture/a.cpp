#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool isPalindrome = true;
  int size = s.size();
  for(int i = 0; i < size / 2; i++) {
    if(s[i] != s[size - 1 - i]) {
      isPalindrome = false;
      break;
    }
  }

  // if(isPalindrome) cout << "YES";
  // else cout << "NO";

  isPalindrome ? cout << "YES" : cout << "NO";
}
  // size, erase, front, back, reverse