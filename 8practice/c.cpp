#include <iostream>
#include <algorithm>
using namespace std;

int countEquals(int a[], int b[], int n) {
  sort(a, a + n);
  sort(b, b + n);
  int i = 0, j = 0, count = 0;
  while(i < n && j < n) {
    if(a[i] == b[j]) {
      count++;
      i++;
      j++;
    } 
    else if(a[i] < b[j]) i++;
    else j++;
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  int b[n];

  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < n; j++) {
      i == 0 ? cin >> a[j] : cin >> b[j];
    }
  }

  cout << countEquals(a, b, n);
  return 0;
}