#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int widthOfOne = 2 * n - 1;
  int width = 2 * widthOfOne + 1;
  int middle = width / 2;
  int leftPivot = -1;
  int rightPivot = -1;
  for(int i = 0; i < n * 2; i++) {
    for(int j = 0; j < width; j++) {
      if(i == n) {
        leftPivot = middle - i;
        rightPivot = middle + i;
      }
      if(
        j == middle - i || // left side
        j == middle + i || // right side
        (i == n - 1 && j <= middle + i && j >= middle - i) || // middle bottom
        (i == n * 2 - 1 && j != middle) || // bottom bottom
        (leftPivot != -1 && j == leftPivot + i - n) || // left pivot triangle
        (rightPivot != -1 && j == rightPivot - i + n) // right pivot triangle
      ) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  
  return 0;
}