// 2d palindrom
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isVectorPalindrom(vector<int> &v) {
  vector<int> originalVector = v;
  reverse(v.begin(), v.end());
  return originalVector == v;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a;
  vector<int> b;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      int x;
      cin >> x;
      if(i == 0) a.push_back(x);
      else if(i == n - 1) b.push_back(x);
    }
  }

  bool isPalindrom = isVectorPalindrom(a) && isVectorPalindrom(b);
  isPalindrom ? cout << "Yes" : cout << "No";
  
  return 0;
}