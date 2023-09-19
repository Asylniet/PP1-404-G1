#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sumEven = 0;
  int sumOdd = 0;
  for(int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    if(a % 2 == 0) sumEven++;
    else sumOdd++;
  }
  cout << sumEven << " " << sumOdd;
  return 0;
}