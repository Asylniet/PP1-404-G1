#include <iostream>
using namespace std;

int main() {
  int w, h, n, square, rectangleSum = 0;
  cin >> w >> h >> n;
  int a[w][h];
  for(int i = 0; i < n; i++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      a[i]
    }
    // x1, y1, x2, y2
    int xwidth = a[i][2] - a[i][0];
    int ywidth = a[i][3] - a[i][1];
    rectangleSum += xwidth * ywidth;
  }

  square = w * h;
  cout << square - rectangleSum;
  return 0;
}