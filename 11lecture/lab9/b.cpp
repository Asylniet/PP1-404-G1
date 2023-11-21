#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

bool compareReverse(int a, int b) {
  return a > b;
}

int main() {
  int n;
  cin >> n;
  vector<int> even;
  vector<int> odd;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if(x % 2 == 0) even.push_back(x);
    else odd.push_back(x);
  }
  sort(even.begin(), even.end(), compareReverse);
  sort(odd.begin(), odd.end());
  for(int i = 0; i < even.size(); i++) {
    cout << even[i] << " ";
  }
  for(int i = 0; i < odd.size(); i++) {
    cout << odd[i] << " ";
  }
  return 0;
}