// Names and cheaters
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  string names[n];
  int occurances[n];
  bool isCheated = false;
  
  for(int i = 0; i < n; i++) {
    cin >> names[i];
    occurances[i] = 1;
    for(int j = i; j >= 0; j--) {
      if(i != j) {
        if(names[i] == names[j]) {
          names[i] = "";
          occurances[j]++;
          isCheated = true;
        }
      }
    }
  }
  cout << endl;
  if(isCheated) {
    for(int i = n - 1; i >= 0; i--) {
      if(occurances[i] > 1) cout << names[i] << endl;
    }
  } else {
    cout << "Understandable, have a great day";
  }
  
  return 0;
}