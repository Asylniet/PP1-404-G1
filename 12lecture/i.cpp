#include <iostream>
#include <set>
using namespace std;

int main() {
  int n;
  cin >> n;
  set<string> names;
  string holder[n];

  for(int i = 0; i < n; i++) cin >> holder[i];

  for(int i = 0; i < n; i++) {
    int prevSize = names.size();
    names.insert(holder[i]);
    prevSize == names.size() ? cout << "user already exists\n" : cout << "new user added\n";
  }
  return 0;
}