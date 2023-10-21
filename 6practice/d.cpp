#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  reverse(a, a + n);
  int countMax = 0;
  for(int i = 0; i < n; i++) {
    int count = 1;
    for(int j = i + 1; j < n; j++) {
      if(a[i] == a[j]) count++;
    }
    if(count > countMax) countMax = count;
  }

  for(int i = 0; i < n; i++) {
    int count = 1;
    for(int j = i + 1; j < n; j++) {
      if(a[i] == a[j]) count++;
    }
    if(count == countMax) cout << a[i] << " ";
  }
  return 0;
}