#include <iostream>
using namespace std;

int factorial(int current, int prev) {
  if(current > 1) return factorial(current - 1, current * prev);
  else return prev;
}

int main() {
  int n;
  cin >> n;
  cout << factorial(n, 1);
  return 0;
}