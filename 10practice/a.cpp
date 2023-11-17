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
  int counter = 1, number = 2;
  while(counter <= n) {
    if(isPrime(number)) {
      counter++;
    }
    if(counter <= n) number++;
  }
  cout << number;
  return 0;
}