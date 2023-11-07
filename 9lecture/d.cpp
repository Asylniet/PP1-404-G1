// Lab 8 L
#include <iostream>
#include <iterator>
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
  int sum = 0;
  set<int>::iterator itr;
  for(itr = s.begin(); itr != s.end(); itr++) {
    sum += *itr;
  }
  cout << sum;
  return 0;
}