#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int counter = 0;
  while(n > 0) {
    if(n % 2 == 1) {
      cout << counter;
      break;
    }
    n /= 2;
    counter++;
  }
  return 0;
}