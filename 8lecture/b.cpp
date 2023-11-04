#include <iostream>
using namespace std;

string binary(int num) {
  char remain = (num % 2) + '0';
  string res = "";
  res += remain;
  if(num > 1) return binary(num / 2) + res;
  return res;
}

int main() {
  int n;
  cin >> n;
  cout << binary(n);
  return 0;
}