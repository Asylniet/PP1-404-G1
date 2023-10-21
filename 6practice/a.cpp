#include <iostream>
using namespace std;

int main() {
  int n, leftCount, leftSum, rightCount, rightSum;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if(a % 2 == 0) {
      leftCount++;
      leftSum += a;
    } else {
      rightCount++;
      rightSum += a;
    }
  }

  cout << "Left hand magic power: " << leftCount * leftSum << endl;
  cout << "Right hand magic power: " << rightCount * rightSum << endl;
  return 0;
}