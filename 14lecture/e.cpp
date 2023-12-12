#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  int counter = 1;
  int max = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(i != 0 && a[i] < a[i - 1]) counter++;
    // if(a[i] < a[i - 1] && a[i] < max) counter--;
    if(a[i] >= max) {
      counter = 1;
      max = a[i];
    }
  }
  
  cout << counter;
  return 0;
}