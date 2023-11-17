// IGNORE FOR NOW WILL PUSH WORKING CODE LATER
// 6^&678JKjdkdl;?.,lk879Pk1kdfl4839
#include <iostream>
#include <string>
using namespace std;

string toBinary(string s) {
  int number = std::stoi(s);
  if (number == 0) return "";
  char digit = number % 2 + '0';
  return toBinary(number / 2) + digit;
}

int main() {
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++) {
    string number = "";
    if(isdigit(s[i])) {
      number += s[i];
    } else {
      if(number != "") {
        cout << toBinary(number);
      }
    }
  }
  return 0;
}