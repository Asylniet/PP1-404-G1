#include <iostream>
using namespace std;


int main() {
  int n; 
  cin >> n;

  int a[n];

  // Input
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Bubble Sort
  bool swapped;
  do {
    swapped = false;
    for (int i = 0; i < n - 1; i++) {
      // if (a[i] < a[i + 1]) {
      if (a[i] > a[i + 1]) {
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
        swapped = true;
      }
    }
  } while (swapped);

  // Output
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
