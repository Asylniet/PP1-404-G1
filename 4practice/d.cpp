#include <iostream>
using namespace std;

int main() {
  char s = '1';
  string str = "11";
  for(int i = 0; i < s.size(); i++) {
    cout << s[i]; // Char
  }
  int num = s - '0';
  cout << num + 6;
  return 0;
}