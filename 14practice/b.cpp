#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int reverseSum(string a, string b) {
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  int sum = stoi(a) + stoi(b);
  string result = to_string(sum);
  reverse(result.begin(), result.end());

  return stoi(result);
}

int main() {
  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    string a, b;
    cin >> a >> b;
    v.push_back(reverseSum(a, b));
  }

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  
  return 0;
}