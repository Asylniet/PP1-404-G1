#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  int max = 0, min = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(i == 0) {
      max = a[i];
      min = a[i];
    }
    if(a[i] > max) max = a[i];
    if(a[i] < min) min = a[i];
  }

  for(int i = 0; i < n; i++) {
    if(a[i] == max) a[i] = min;
    cout << a[i] << " ";
  }
  return 0;
}