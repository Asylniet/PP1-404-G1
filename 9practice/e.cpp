#include <iostream>
using namespace std;

bool uniqueDivider(int n) {
  if(n == 1) return true;
  if(n % 2 == 0) return uniqueDivider(n / 2);
  else return false;
}

int main() {
  int n;
  cin >> n;
  uniqueDivider(n) ? cout << "Yes" : cout << "No";
  return 0;
}