//#include <iostream>
// #include <iterator>
// #include <algorithm>
// #include <vector>
// using namespace std;

// bool compareNumbers(int a, int b) {
//   return a < b;
// }

// int main() {
//   int n;
//   cin >> n;
//   vector<int> numbers;
//   for(int i = 0; i < n; i++) {
//     int x;
//     cin >> x;
//     numbers.emplace_back(x);
//   }
//   sort(numbers.begin(), numbers.end(), compareNumbers);
//   for(int i = 0; i < numbers.size(); i++) {
//     cout << numbers[i] << endl;
//   }
//   return 0;
// }

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

bool comparePoints(pair<int, int> &a, pair<int, int> &b) {
  if(a.first == b.first) {
    return a.second < b.second;
  }
  return a.first < b.first;
}
// bool comparePoints(pair<int, int> &a, pair<int, int> &b) {
//   if(a.second == b.second) {
//     return a.first < b.first;
//   }
//   return a.second < b.second;
// }

int main() {
  int n;
  cin >> n;
  vector<pair<int, int> > points;
  for(int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    points.emplace_back(x, y);
  }
  sort(points.begin(), points.end(), comparePoints);
  for(int i = 0; i < points.size(); i++) {
    cout << points[i].first << " " << points[i].second << endl;
  }
  return 0;
}