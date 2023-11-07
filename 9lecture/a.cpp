#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;
  for(int i = 0; i < 4; i++) {
    int a;
    cin >> a;
    v.push_back(a);
  }
  v.insert(v.begin() + 2, 10);
  v.pop_back();
  v.erase(v.begin() + 2);
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  return 0;
}