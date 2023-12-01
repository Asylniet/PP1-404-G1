//2 'nd min

#include <iostream>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mp[x]++;
  }

  mp.erase(mp.begin());
  cout << mp.begin()->second;
  
  return 0;
}