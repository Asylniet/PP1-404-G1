#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  for(int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    if(a % 10 == 7) sum++;
  }
  cout << sum;
  return 0;
}