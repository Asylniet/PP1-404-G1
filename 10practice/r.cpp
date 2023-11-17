// R
#include <iostream>
using namespace std;

int main() {
  int start, end;
  string s;
  cin >> s;
  char c;
  cin >> c;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == c) {
      start = i;
      break;
    }
  }
  for(int i = s.size() - 1; i >= 0; i--) {
    if(s[i] == c) {
      end = i;
      break;
    }
  }

  cout << start;
  if(start != end) {
    cout << " " << end;
  }
  return 0;
}