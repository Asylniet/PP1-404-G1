// Найти сумму всех чисел внутри одного числа
// Найти умножение всех чисел друг на друга внутри одного числа
// суммировать их

#include <iostream>
using namespace std;

int main() {
  int n, plusSum = 0, multiSum = 1;
  cin >> n;
  while(n > 0) {
    int lastDigit = n % 10;
    plusSum += lastDigit;
    multiSum *= lastDigit;
    n /= 10;
  }
  cout << plusSum + multiSum;
  return 0;
}