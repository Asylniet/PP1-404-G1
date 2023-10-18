#include <iostream>
using namespace std;

int main() {
  int n, m, center;
  cin >> n;
  m = 2 * (n - 1) + 1;
  center = (m - 1) / 2;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(j >= center - i && j <= center + i) cout << "*";
      else cout << ".";
    }
    cout << endl;
  }
  return 0;
}