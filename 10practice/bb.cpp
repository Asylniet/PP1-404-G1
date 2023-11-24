// IGNORE FOR NOW WILL PUSH WORKING CODE LATER
// 6^&678JKjdkdl;?.,lk879Pk1kdfl4839
#include <iostream>
using namespace std;

string convertToBinary(int number) {
  string binary;
  while (number > 0) {
      binary = (char)('0' + (number % 2)) + binary;
      number /= 2;
  }
  return binary.empty() ? "0" : binary;
}

string replaceNumbersWithBinary(const string& input) {
  string result;
  string currentNumber;

  for (int i = 0; i < input.size(); i++) {
    char ch = input[i];
    if(isdigit(ch)) {
      currentNumber += ch;
    } else {
      if (!currentNumber.empty()) {
        int number = stoi(currentNumber);
        string binary = convertToBinary(number);
        result += binary;
        currentNumber.clear();
      }
      result += ch;
    }
  }

  if (!currentNumber.empty()) {
    int number = stoi(currentNumber);
    string binary = convertToBinary(number);
    result += binary;
  }

  return result;
}

int main() {
  string input = "6^&678JKjdkdl;?.,lk879Pk1kdfl4839";
  string output = replaceNumbersWithBinary(input);
  cout << output;
  return 0;
}
