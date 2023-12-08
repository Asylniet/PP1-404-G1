// Sorting by columns

// Input  
// 5 8 9   5 4 1
// 4 3 2   8 3 7
// 1 7 8   9 2 8

// Output
// 1 3 2
// 4 7 8
// 5 8 9
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[j][i];
    }
  }

  for(int i = 0; i < n; i++) {
    sort(a[i], a[i] + m);
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cout << a[j][i] << " ";
    }
    cout << endl;
  }
  
  return 0;
}