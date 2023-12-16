#include <iostream>
using namespace std;

int main() {
  string word;
  string secret;
  cin >> word >> secret;
  int secretSize = secret.size();
  for(int i = 0; i < word.size() - secretSize; i++) {
    secret += secret[i % secretSize];
  }

  for(int i = 0; i < word.size(); i++) {
    int index = word[i] - 'a';
    // char letter = 'a' + (secret[i] + index) % 26;
    char letter = secret[i] + index;
    char res = letter > 'z' ? letter - 26 : letter;
    cout << letter;
  }
  return 0;
}