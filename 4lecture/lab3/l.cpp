#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cin >> m;
  int b[m];
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }

  int c[n + m];
  for(int i = 0; i < n + m; i++) {
    if(i < n) {
      c[i] = a[i];
    } else {
      c[i] = b[i - n];
    }
  }

  // Bubble Sort
  bool swapped;
  do {
    swapped = false;
    for (int i = 0; i < n + m - 1; i++) {
      if (c[i] > c[i + 1]) {
        int temp = c[i];
        c[i] = c[i + 1];
        c[i + 1] = temp;
        swapped = true;
      }
    }
  } while (swapped);

  for(int i = 0; i < n + m; i++) {
    cout << c[i] << " ";
  }

  return 0;
}