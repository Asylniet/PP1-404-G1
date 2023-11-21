#include <iostream>
#include <iterator>
#include <map>
using namespace std;

// map["Andrei"] = 118;

int main() {
  string s;
  getline(cin, s);
  map<char, int> letters;
  for(int i = 0; i < s.size(); i++) {
    letters[s[i]]++;
  }
  map<char, int>::iterator it;
  for(it = letters.begin(); it != letters.end(); it++) {
    cout << it->first << " - " << it->second << endl;
  }
  return 0;
}