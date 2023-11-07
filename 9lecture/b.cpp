// Lab 8 B
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    v.insert(v.begin(), a);
  }
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  return 0;
}