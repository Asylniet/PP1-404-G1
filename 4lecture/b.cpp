#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int size = s.size() - 1;
  int occurances[size + 1];
  char letters[size + 1];

  for(int i = 0; i <= size; i++) {
    // Searching for letter occurance
    bool inLetters = false;
    for(int j = 0; j <= i; j++) {
      // s[i] is the letter from word we are considering
      // letters[j] always changes, and goes through the letters array
      if(s[i] == letters[j]) {
        occurances[j]++;
        inLetters = true;
        break;
      }
    }
    // Puts the new letter in letters array
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