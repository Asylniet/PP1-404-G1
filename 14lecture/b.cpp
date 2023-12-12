// Input: 
// 1  7   6   5   4   3     0
// 0  1   2   3   4   5
//5-5 5-4 5-3 5-2 5-1 5-0
// v.size() - 1 = 5

// 1 + 3;
// 7 + 4;
// 6 + 5;
// Output
// cout << 
// max

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  vector<int> v;
  while(n != 0) {
    cin >> n;
    if(n != 0) v.push_back(n);
  }

  for(int i = 0; i < v.size() / 2; i++) {
    cout << v[i] + v[v.size() - 1 - i] << " ";
  }

  if(v.size() % 2 == 1) cout << v[v.size() / 2];
  
  return 0;
}