#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a1, a2, a3, b1, b2, b3;
  cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

  int prices[] = {a1, a2, a3};
  sort(prices, prices + 3);

  int volumes[] = {b1, b2, b3};
  sort(volumes, volumes + 3);

  cout << prices[2] * volumes[2] + prices[1] * volumes[1] + prices[0] * volumes[0];

  return 0;
}