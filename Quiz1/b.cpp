// Вывести является ли введенное числом квадратом другого числа
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int square = 1;
  for (int i = 2; i <= sqrt(n); i++) {
    if (i * i == n) {
      square = i;
      break;
    }
  }

  if(square > 1) cout << square;
  else cout << "NO";
  return 0;
}