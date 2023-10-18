// Swapping two columns untill a

#include <iostream>
using namespace std;

int main() {
  int n, m, a;
  cout << "Enter the size of matrix\n";
  cin >> n >> m;
  int arr[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  cout << "Enter the column limit\n";
  cin >> a;
  if(a > m - 1) a = m - 1; 
  for(int column = 0; column < a; column++) {
    for(int i = 0; i < n; i++) {
      int brother = arr[i][column];
      arr[i][column] = arr[i][column + 1]; // I take
      arr[i][column + 1] = brother; // Mom takes
    }
  }

  cout << "Result\n";
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}