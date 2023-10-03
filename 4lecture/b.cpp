#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int size = s.size() - 1;
  int occurances[size];
  char letters[size];

  for(int i = 0; i <= size; i++) {
    // Searching for letter occurance
    bool inLetters = false;
    for(int j = 0; j <= i; j++) {
      if(s[i] == letters[j]) {
        occurances[j]++;
        inLetters = true;
        break;
      }
    }
    if(!inLetters) {
      letters[i] = s[i];
      occurances[i] = 1;
    }
  }

  for(int i = 0; i <= size; i++) {
    if(occurances[i] > 0) cout << letters[i] << ": " << occurances[i] << endl;
  }
  return 0;
}