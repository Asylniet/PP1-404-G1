// полиндром числа
#include <iostream>
using namespace std;

int main() {
  int num, originalNum, reversedNum = 0;
  cin >> num;
  originalNum = num;
  while (num > 0) {
      int digit = num % 10;
      reversedNum = reversedNum * 10 + digit;
      num /= 10;
  }

  if(originalNum == reversedNum) cout << "YES";
  else cout << "NO";
  return 0;
}