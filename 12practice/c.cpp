// 2018 Quiz 3 V1, E
#include <iostream>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> mp;
  map<int, int> mp2;

  int zeroCounter = 0;
  while(zeroCounter < 2) {
    int x;
    cin >> x;
    if(x == 0) zeroCounter++;
    else zeroCounter == 0 ? mp[x]++ : mp2[x]++;
  }

  for(int i = 1; i <= n; i++) {
    if(mp[i] > 0 && mp2[i] > 0) cout << i << " ";
  }

  cout << endl;

  for(int i = 1; i <= n; i++) {
    if(mp[i] == 0 && mp2[i] == 0) cout << i << " ";
  }
  return 0;
}