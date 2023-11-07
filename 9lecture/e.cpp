#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  while(!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
  // stack<int> s;
  // s.push(1);
  // s.push(2);
  // s.push(3);
  // cout << s.top();
  return 0;
}