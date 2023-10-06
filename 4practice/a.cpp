#include <iostream>
using namespace std;

int main() {
  int height, day, night, distance = 0, counter = 0;
  cin >> height >> day >> night;
  while(distance < height) {
    counter++;
    distance += day;
    if(distance >= height) break;
    distance -= night;
  }

  cout << counter;
  return 0;
}