// 2d Vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int> > v;
  for(int i = 0; i < n; i++) {
    vector<int> temp;
    for(int j = 0; j < m; j++) {
      int x;
      cin >> x;
      temp.push_back(x);
    }
    v.emplace_back(temp);
  }

  for(int i = 0; i < v.size(); i++) {
    for(int j = 0; j < v[i].size(); j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}