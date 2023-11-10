#include <iostream>
#include <string>
using namespace std;

int sumOfDigits(string n) {
  if(n == "") return 0;
  int lastDigit = n[n.size() - 1] - '0';
  return lastDigit + sumOfDigits(n.substr(0, n.size() - 1));
}

int main() {
  string n;
  cin >> n;
  cout << sumOfDigits(n);
  return 0;
}