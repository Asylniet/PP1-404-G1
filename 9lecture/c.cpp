// Lab 8 L
#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> s;
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    s.insert(a);
  }
  cout << s.size();
  return 0;
}