// 3
// 1 0 3

// 2
// 0 1

#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  for(int i = 0; i < n; i++) {
    char c;
    cin >> c;
    s += c;
  }

  for(int i = 1; i <= n; i++) {
    if(s.find(i + '0') == string::npos) {
      cout << i << " ";
      break;
    }
  }
  return 0;
}