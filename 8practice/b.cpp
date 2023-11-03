#include <iostream>
#include <string>
using namespace std;

string sortInRange(string s, int start, int length) {
  string beforeStart = s.substr(0, start);
  string needsToBeSorted = s.substr(start, length);
  string rest = s.substr(start + length, s.size() - start + length);

  sort(needsToBeSorted.begin(), needsToBeSorted.end());
  return beforeStart + needsToBeSorted + rest;
}

int main() {
  cout << sortInRange("Hello, Andrei!", 7, 6) << endl;
  cout << sortInRange("Good day, sir, Alikhan Maksut!", 5, 9) << endl;
  return 0;
}