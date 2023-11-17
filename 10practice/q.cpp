#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  string mails[n];
  for(int i = 0; i < n; i++) {
    cin >> mails[i];
  }
  
  for(int i = 0; i < n; i++) {
    int position = mails[i].find("@gmail.com");
    if(position != -1 && mails[i].size() - 10 == position) {
      // cout << mails[i].substr(0, position) << endl;
      cout << mails[i].erase(position, mails[i].size() - position) << endl;
    }
  }
  return 0;
}