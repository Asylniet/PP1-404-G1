#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if((i + j) % 2 == 0) cout << a[i][j] + 1;
      else cout << a[i][j] - 1;
      cout << " ";
    }
    cout << endl;
  }
  return 0;
}