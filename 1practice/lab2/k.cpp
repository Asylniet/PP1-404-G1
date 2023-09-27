#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for(int i = 1; i <= n / 2; i++) {
    int pow = i * i;
    if(pow < n) cout << pow << endl;
  }
  return 0;
}