// По координатам прямоугольника и точки вывести лежит ли точка в/на треугольнике
#include <iostream>
using namespace std;

int main() {
  int x1, x2, y1, y2, px, py;
  cin >> x1 >> y1 >> x2 >> y2 >> px >> py;

  if (px >= x1 && px <= x2 && py >= y1 && py <= y2) cout << "INSIDE";
  else cout << "OUTSIDE";
  return 0;
}