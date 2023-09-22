#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int number = pow(2, i);
    if(number <= n) cout << number << endl;
  }
  return 0;
}