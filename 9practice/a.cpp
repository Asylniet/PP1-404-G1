#include <iostream>
using namespace std;

bool isValid(string s, int number) {
  int count = 0;
  for(int i = 0; i < s.size(); i++) {
    if(isdigit(s[i])) count++;
  }

  return count >= number;
}

// void isValid(string s, int number) {
//   int count = 0;
//   for(int i = 0; i < s.size(); i++) {
//     if(isdigit(s[i])) count++;
//   }

//   count >= number ? cout << "Yes" : cout << "No" << endl;
// }

int main() {
  string str;
  int num;
  cin >> str >> num;
  isValid(str, num) ? cout << "Yes" : cout << "No";
  isValid("s4ys0om3thing 1", 1) ? cout << "Valid" : cout << "Not Valid";
  return 1465;
}