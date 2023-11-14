#include <iostream>
#include <string>

using namespace std;

string hex(int n) {
  if (n == 0) return "";
  char digit = n % 16 < 10 ? n % 16 + '0' : n % 16 - 10 + 'A';
  return hex(n / 16) + digit;
}

int main() {
    int n;
    cin >> n;
    cout << hex(n);
    return 0;
}