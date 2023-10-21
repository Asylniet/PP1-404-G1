#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int sum = 0, firstInt = s[0] - '0';
  for(int i = 1; i < s.size(); i++) {
    int a = s[i] - '0';
    sum += a;
  }

  if(firstInt == sum % 10) cout << "YES";
  else cout << "NO";
}