#include <iostream>

using namespace std;

int main() {
  int n, target, position = -1;
  cin >> n >> target;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < n; i++) {
    if(target == a[i]) {
      position = i + 1;
      break;
    } else if(target < a[i]) {
      if(i == 0) position = 1;
      else position = i;
      break;
    }
  }

  if(position == -1) position = n;

  cout << position;
  return 0;
}