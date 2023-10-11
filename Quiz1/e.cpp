// Про торты и надрезы 
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if(n > 0) {
    if(n % 2 == 0) cout << n / 2;
    else cout << n;
  } else {
    cout << 0;
  }
  return 0;
}