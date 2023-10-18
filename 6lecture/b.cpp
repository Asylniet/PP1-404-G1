// Swapping two columns a, b

#include <iostream>
using namespace std;

int main() {
  int n, m, a, b;
  cout << "Enter the size of matrix\n";
  cin >> n >> m;
  int arr[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  cout << "Enter the columns\n";
  cin >> a >> b;
  for(int i = 0; i < n; i++) {
    int brother = arr[i][a];
    arr[i][a] = arr[i][b]; // I take
    arr[i][b] = brother; // Mom takes
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