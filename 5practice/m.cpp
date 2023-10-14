#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n][n];
  int frame = 0;
  int counter = 0;

  for(int i = 0; i < n; i++) {
    cout << i << " ";
    a[0][i] = i + 1;
    counter++;
  }
  cout << endl;
  int counterState = counter;
  for(int i = counterState + 1; i <= counterState + n - 1; i++) {
    cout << i << endl;
    a[i][n - 1] = i;
    counter++;
  }

  counterState = counter;
  for(int i = counterState + n - 1; i > counterState; i--) {
    cout << i << " ";
    counter++;
  }
  cout << endl;
  counterState = counter;
  for(int i = counterState + n - 2; i > counterState; i--) {
    cout << i << endl;
    counter++;
  }

  cout << "\ncounter - " << counter;
  // for (int i = 0; i < n; i++) {
  //     for (int j = 0; j < n; j++) {
  //         cout << a[i][j] << " ";
  //     }
  //     cout << endl;
  // }

  return 0;
}