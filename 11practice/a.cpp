#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> m;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    m[x]++;
  }
  int counter = 0;
  map<int, int>::iterator it;
  for(it = m.begin(); it != m.end(); it++) {
    if(it->second > 1) counter++;
  }
  cout << counter;
  return 0;
}