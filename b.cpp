#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int k = m / 100;
  int v = m % 10;
  cout << n + k + v;
}