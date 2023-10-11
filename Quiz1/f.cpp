// Даётся 3 числа, надо отсортировать и ревёрснуть
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int arr[] = {a, b, c};
  sort(arr, arr + 3);

  cout << arr[2] << " " << arr[1] << " " << arr[0];
  return 0;
}
