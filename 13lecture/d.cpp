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
  int number = 1;
  int primeIndex = 0;
  int superPrimeIndex = 0;
  while(superPrimeIndex < n) {
    number++;
    if(isPrime(number)) {
      primeIndex++;
      if(isPrime(primeIndex)) superPrimeIndex++;
    }
  }

  cout << number;
  return 0;
}