#include <iostream>
using namespace std;

int gcd(int a, int b) {
  int max = 1;
  for(int i = 2; i <= min(a, b); i++) {
    if(a % i == 0 && b % i == 0) {
      if(i > max) max = i; 
    }
  }
  return max;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  int max = 1;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i != j) {
        int g = gcd(a[i], a[j]);
        if(g > max) max = g;
      }
    }
  }
  cout << max;
  return 0;
}