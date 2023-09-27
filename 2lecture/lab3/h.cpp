#include <iostream>

using namespace std;

int main() {
  int n, start, end, sum = 0;
  cin >> n >> start >> end;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(i + 1 >= start && i + 1 <= end) {
      sum += a[i];
    }
  }

  cout << sum;
  return 0;
}