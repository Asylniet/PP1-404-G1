#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n][n];

  // Output
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      cout << i * j << " ";
    }
    cout << endl;
  }
  return 0;
}