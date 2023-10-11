// Известны результаты каждой из 4х четвертей баскетбольной встречи. Нужно определить победителя матча. Побеждает команда, набравшая больше очков в течение всего матча.
#include <iostream>
using namespace std;

int main() {
  int firstSum, secondSum;
  for(int i = 1; i <= 4; i++) {
    int a, b;
    cin >> a >> b;
    firstSum += a;
    secondSum += b;
  }

  if(firstSum > secondSum) cout << 1;
  else cout << 2;
  return 0;
}