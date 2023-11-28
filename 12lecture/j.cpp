#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  for(int i = 0; i < n; i++) {
    string s;
    int x;
    cin >> s >> x;
    mp[s] += x;
  }

  map<string, int>::iterator it;
  for(it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }
  return 0;
}