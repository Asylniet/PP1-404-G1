#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

bool hasIntegerSquareRoot(int number) {
    if (number < 0) {
        return false;
    }
    
    double sqrtResult = sqrt(number);
    int sqrtResultInt = int(sqrtResult);
    
    return (sqrtResultInt * sqrtResultInt == number);
}

int main() {
  int n, m, d;
  cin >> n >> m >> d;
  if(m < n) {
    cout << "M can't be less than N";
    return 0;
  }
  
  if(d != 1 && d != -1) {
    cout << "Enter correct direction";
    return 0;
  }

  vector<int> v;
  for(int i = n; i <= m; i++) {
    if(hasIntegerSquareRoot(i)) {
      v.push_back(i);
    }
  }

  if(d == -1) reverse(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  return 0;
}
