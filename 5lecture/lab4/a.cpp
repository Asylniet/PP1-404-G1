#include <iostream>

using namespace std;

int main() {
  int n, m, max;
  cin >> n >> m;
  int a[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[i][j];
      if(i == 0 && j == 0) max = a[i][j];
      if(a[i][j] > max) max = a[i][j];
    }
  }

  cout << max;

  return 0;
}