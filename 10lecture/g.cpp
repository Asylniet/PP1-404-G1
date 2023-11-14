#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  int n;
  cin >> n;
  char c[n];
  int counters[n];
  for(int i = 0; i < n; i++) {
    cin >> c[i];
    counters[i] = 0;
  }

  sort(c, c + n);
  for(int i = 0; i < s.size(); i++) {
    for(int j = 0; j < n; j++) {
      if(s[i] == c[j]) {
        counters[j]++;
        break;
      }
    }
  }

  for(int i = 0; i < n; i++) {
    cout << c[i] << " - " << counters[i] << endl;
  }
  return 0;
}