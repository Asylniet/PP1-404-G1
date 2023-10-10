#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  if(n > 8 || m > 8 || m < 1 || n < 1) cout << "Error";
  else {
    for(int i = 0; i <= 8; i++) {
      for(int j = 0; j <= 8; j++) {
        if(i == 0) cout << j << " ";
        else if(j == 0) cout << i;
        else if(i == n && j == m) cout << " 0";
        else if(
          i == n || 
          j == m || 
          (i - n == j - m) || // Diagonal
          (i - n == m - j) // Reversed diagonal (x == y)
        ) cout << " +";
        else cout << "  ";
      }
      cout << endl;
    }
  }
  return 0;
}