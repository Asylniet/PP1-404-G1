#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int zeros = 0;
  for(int i = 1; i <= n; i++) {
    int input;
    cin >> input;
    // cout << input << endl;
    while (input > 0) {
      int lastNumber = input % 10;
      if(lastNumber == 0) zeros++;

      input /= 10;
      // cout << "lastNumber - " <<  lastNumber << " new input - " << input << endl;
    }
    // cout << endl << " --------- " << endl;
  }
  cout << zeros;
  return 0;
}