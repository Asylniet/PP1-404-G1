#include <iostream>
using namespace std;

int degree(int currentDegree) {
  if(currentDegree >= 1) return 2 * degree(currentDegree - 1);
  return 2;
}

int main() {
  int n;
  cin >> n;
  cout << degree(n);
  return 0;
}