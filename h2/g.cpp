#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int input, maxi;
  for(int i = 0; i < n; i++) {
    cin >> input;
    if (i == 0) maxi = input;
    if(input > maxi) {
      maxi = input;
    }
  }
  cout << maxi;
}