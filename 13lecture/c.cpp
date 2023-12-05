#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool isUnique(int number) {
  set<int> s;
  int counter = 0;
  while(number > 0) {
    int digit = number % 10;
    s.insert(digit);
    number /= 10;
    counter++;
  }
  
  return counter == s.size();
}

int main() {
  int start, end;
  cin >> start >> end;
  for(int i = start; i <= end; i++) {
    if(isUnique(i)) {
      cout << i;
      return 0;
    }
  }
  cout << "Understandable, have a great day";
  return 0;
}