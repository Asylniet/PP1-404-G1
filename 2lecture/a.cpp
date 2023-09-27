#include <iostream>

using namespace std;

int main() {
  int sum = 0;
  int a;
  while(cin >> a) {
    sum += a;
    // cout << sum;
  }
  cout << sum;
  // How to stop code without losing sum
  return 0;
}