#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
  int n;
  cin >> n;
  stack<int> st;
  queue<int> q;

  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    st.push(a);
    q.push(a);
  }

  while(!st.empty()) {
    cout << q.front() << " " << st.top() << endl;
    q.pop();
    st.pop();
  }
  return 0;
}