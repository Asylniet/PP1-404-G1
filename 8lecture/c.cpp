#include <iostream>
using namespace std;

bool binarySearch(int a[], int index, int num, int n) {
  if(index >= n || index < 0) return false;
  if(a[index] == num) return true;
  if(a[index] < num && a[index + 1] > num) return false;

  else if(a[index] > num) return binarySearch(a, --index, num, n);
  else if(a[index] < num) return binarySearch(a, ++index, num, n);
  return false;
}

int main() {
  int n, num;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  cin >> num;

  if(binarySearch(a, n / 2, num, n)) cout << "YES";
  else cout << "NO";
  return 0;
}