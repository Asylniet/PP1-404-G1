#include <iostream>
#include <queue>
using namespace std;

int main() {
  string s;
  cin >> s;
  queue<char> q;
  char temp = ' ';
  for(int i = 0; i < s.size(); i++) {
    q.push(s[i]);
  }

  int openCount = 0;
  while(!q.empty()) {
    char current = q.front();
    q.pop();
    if (current == '(') {
      openCount++;
    } else if (current == ')') {
      if (openCount > 0) {
        openCount--;
      } else {
        cout << "Invalid" << endl;
        return 0;
      }
    }
  }

  // if (openCount == 0) cout << "Valid" << endl;
  // else cout << "Invalid" << endl;

  cout << openCount == 0 ? "Valid" : "Invalid";
  return 0;
}
