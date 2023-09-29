#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < n; i++) {
    bool duplicated = false;
    for(int j = i + 1; j < n; j++) {
      if(a[i] == a[j]) {
        duplicated = true;
      }
    }

    if(!duplicated) cout << a[i] << " ";
  }

  // Try to make it work with unsorted arrays
  // Divide sentence into words and output
  // Output all punctuation marks in a sentence
  return 0;
}