#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main() {
  map<string, int> ages;
  cout << ages.max_size();
  ages["Andrei"] = 118;
  ages["Ridvan"] = 217;
  ages["Aizifa"] = 17;
  // cout << ages.empty();

  ages.erase("Andrei");
  ages.erase("Ridvan");
  ages.erase("Aizifa");
  map<string, int>::iterator it;
  for(it = ages.begin(); it != ages.end(); it++) {
    cout << it->first << " - " << it->second << endl;
  }
  return 0;
}