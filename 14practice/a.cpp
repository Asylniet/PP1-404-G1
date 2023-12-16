#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  vector<string> available;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    available.push_back(s);
  }

  cin >> m;
  vector<pair<string, string> > v;
  for(int i = 0; i < m; i++) {
    string one, two;
    cin >> one >> two;
    v.push_back(make_pair(one, two));
  }

  string target;
  cin >> target;
  
  vector<string> result;
  for (int i = 0; i < v.size(); i++) {
    if(v[i].first == target) result.push_back(v[i].second);
    else if(v[i].second == target) result.push_back(v[i].first);
  }

  sort(result.begin(), result.end());

  cout << result.size() << endl;
  if(result.size() == 0) return 0;
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
  
  return 0;
}