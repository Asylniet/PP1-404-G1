#include <iostream>
using namespace std;

int main() {
  string s1 = "practice2", s2 = "practive";

  int size;
  if(s1.size() > s2.size()) size = s1.size();
  else size = s2.size();

  for(int i = 0; i < size; i++) {
    if(s1[i] != s2[i]) {
      cout << i << " " << s1[i] << " - " << s2[i] << endl;
    }
  }
  // Min
  // string s1 = "practice2", s2 = "practive";

  // int size;
  // if(s1.size() > s2.size()) size = s2.size();
  // else size = s1.size();

  // for(int i = 0; i < size; i++) {
  //   if(s1[i] != s2[i]) {
  //     cout << i << " " << s1[i] << " - " << s2[i] << endl;
  //   }
  // }
  return 0;
}