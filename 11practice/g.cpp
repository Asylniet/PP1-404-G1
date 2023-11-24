#include <iostream>
#include <queue>
using namespace std;

int main() {
  string s;
  cin >> s;
  queue<char> q;
  queue<char> q2;
  for(int i = 0; i < s.size(); i++) {
    q.push(s[i]);
  }
  char current = ' ';
  while(!q.empty()) {
    if(current == '1') current = ' ';
    else if(q.front() == '1') current = q.front();
    else {
      q2.push(current);
      q2.push(q.front());
      current = ' ';
    };

    q.pop();
  }
  if(current != ' ') q2.push(current);
  
  while(!q2.empty()) {
    cout << q2.front();
    q2.pop();
  }

  return 0;
}
