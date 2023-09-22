#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  // Принимали
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    a[i] = input;
  }
  int maxiPosition = 0;
  // Проходимся по каждому элементу
  for (int i = 0; i < n; i++) {
    if(a[i] > a[maxiPosition]) {
      maxiPosition = i;
    } 
  }
  cout << maxiPosition << endl;
  return 0;
}