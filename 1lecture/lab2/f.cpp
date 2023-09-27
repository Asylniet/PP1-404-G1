#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  // Method with for
  // int sum = 0;
  // for(int i = 1; i <= n; i++) {
  //   sum += i;
  //   // cout << "sum - " << sum << " i - " << i << endl;
  // }

  int sum = 0;
  int i = 0;
  while(i <= n) {
    sum += i;
    i++;
  }
  cout << sum;
  return 0;
}