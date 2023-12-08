#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> split(string s) {
  vector<string> v;
  string currentDate = "";
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '-' || i == s.size() - 1) {
      if(i == s.size() - 1) currentDate += s[i];
      v.push_back(currentDate);
      currentDate = "";
    } else {
      currentDate += s[i];
    }
  }
  return v;
}

bool compareDates(string a, string b) {
  vector<string> firstDate = split(a);
  vector<string> secondDate = split(b);
  // firstDate[0] - day
  // firstDate[1] - month
  // firstDate[2] - year
  if(firstDate[2] == secondDate[2]) { // If years are same
    if(firstDate[1] == secondDate[1]) { // If months are same
      return stoi(firstDate[0]) < stoi(secondDate[0]); // Compare by days
    }
    return stoi(firstDate[1]) < stoi(secondDate[1]); // Compare by month
  }
  return stoi(firstDate[2]) < stoi(secondDate[2]); // Compare by years
}

int main() {
  int n;
  cin >> n;
  vector<string> v;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }

  sort(v.begin(), v.end(), compareDates);

  for(int i = 0; i < n; i++) {
    cout << v[i] << endl;
  }
  
  return 0;
}