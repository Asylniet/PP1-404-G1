#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for(int i = 0; i < n ; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  cout << endl << "Original\n";
  for(int i = 0; i < n ; i++) {
    for(int j = 0; j < m; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl << "Transposed\n";
  for(int j = 0; j < m; j++) {
    for(int i = 0; i < n ; i++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}