#include <iostream>
#include <deque>
using namespace std;

int main() {
  int n;
  cin >> n;
  deque<string> q;
  string messages[n];
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if(x == 1) {
      string s;
      cin >> s;
      q.push_front(s);
    } else if(x == 2) {
      q.pop_front();
    }

    // if(q.empty()) messages[i] = "queue is empty";
    // else messages[i] = q.front();
    messages[i] = q.empty() ? "queue is empty" : q.front();
  }

  for(int i = 0; i < n; i++) {
    cout << messages[i] << endl;
  }
  return 0;
}
