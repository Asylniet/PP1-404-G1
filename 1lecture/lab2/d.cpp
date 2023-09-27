#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int result;
  
  if (n < k) {
    result = 2;
  } else if (2 * n % k != 0) {
    result = 2 * n / k + 1;
  } else {
    result = 2 * n / k;
  }

  cout << result;
  return 0;
}