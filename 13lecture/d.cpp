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
  int number = 2;
  int primeIndex = 0;
  int superPrimeIndex = 0;
  while(superPrimeIndex < n) {
    if(isPrime(number)) primeIndex++;
    if(isPrime(primeIndex)) superPrimeIndex++;
    cout << number << " - pI: " << primeIndex << " sI: " << superPrimeIndex << endl; 
    number++;
  }

  cout << number;
  return 0;
}