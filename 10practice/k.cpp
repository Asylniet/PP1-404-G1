#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  string s;
  cin >> s;
  int sum = 0;
  for(int i = 0; i < s.size(); i++) {
    int digit = s[i] - '0';
    sum += digit * pow(2, s.size() - 1 - i);
  }
  // THE WEIRD WAY
  // reverse(s.begin(), s.end());
  // for(int i = 0; i < s.size(); i++) {
  //   int digit = s[i] - '0';
  //   sum += digit * pow(2, i);
  // } 
  cout << sum;
  return 0;
}