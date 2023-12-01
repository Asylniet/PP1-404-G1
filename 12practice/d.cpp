// 2018 Quiz 3 V1, F
#include <iostream>
#include <string>
#include <map>
using namespace std;

pair<string, int> split(string s) {
  string name;
  string score;
  for(int i = s.size() - 1; i >= 0; i--) {
    if(s[i] == ' ') {
      name = s.substr(0, i);
      score = s.substr(i + 1, s.size() - 1 - i);
      break;
    }
  }
  pair<string, int> res(name, stoi(score));
  return res;
}

int main() {
  int n;
  cin >> n;
  cin.ignore(); // Because cin >> n after iteself was placing new line or \n to the input(alhough we don't see)
  // getline(cin, s) was trying to catch the \n element and we were getting error with stoi func, because empty string can't be casted into integer type
  // Respectively, cin.ignore() ignores that \n element
  map<int, string> mp;
  for(int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    pair<string, int> p = split(s);
    mp[p.second] = p.first;
  }

  cout << mp.rbegin()->first;
  // Printing the last element in map. Since mp.end() will give us null or empty. Because mp.end() points to the very next element to last record in map. So, it is not the actual last element, but kinda *actualLast()->next;
  // That is why there is rbegin() notation, which really starts from the last and can go reverse till rend()
  // Btw, rend() also does not point to the actual first element, it points to kinda actualStart()->previous
  // I know, it's crap, but it is how it is. I also just got to know that weird stuff
  return 0;
}