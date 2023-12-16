#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
  if(n == 1) return false;
  for(int i = 2; i <= sqrt(n); i++) {
    if(n % i == 0) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  for (int i = 2; i < n; i++) {
    if(isPrime(i) && isPrime(n - i)) {
      cout << i << " " << n - i;
      return 0;
    }
  }
  
  return 0;
}