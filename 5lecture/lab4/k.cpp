#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  // Input
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  for(int i = 0; i < n; i++) {
    // Start of row
    int sum = 0;
    for(int j = 0; j < m; j++) {
      // Every element in row
      sum += a[i][j];
    }
    cout << "The sum of row number " << i + 1 << " is " << sum << endl;
  }

  for(int j = 0; j < m; j++) {
    // Start of column
    int sum = 0;
    for(int i = 0; i < n; i++) {
      // Every element in column
      sum += a[i][j];
    }
    cout << "The sum of column number " << j + 1 << " is " << sum << endl;
  }
  return 0;
}