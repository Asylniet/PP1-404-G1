#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < n - 1; i++) {
    if(a[i] != a[i + 1]) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}