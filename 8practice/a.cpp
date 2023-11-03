#include <iostream>
using namespace std;

void sum(int a, int b) {
  cout << "Welcome to out factory!\n";
  int result = a + b;
  cout << result;
}

bool checkForEvennes(int n) {
  return n % 2 == 0;
}

int main() {
  int n;
  cin >> n;
  for(int i = -10; i <= n; i++) {
    if(checkForEvennes(i)) cout << i << " ";
  }
  return 0;
}