#include <iostream>

using namespace std;

int main() {
  int n, start, end;
  cin >> n >> start >> end;
  int a[n];
  // Input
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Mirror
  // for(int i = start - 1; i < (end - 1) / 2; i++) {
  for(int i = start - 1; i < (start + end) / 2; i++) {
    int b = a[i];
    a[i] = a[start + end - i - 2];
    a[start + end - i - 2] = b;
  }

  // Output 
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}