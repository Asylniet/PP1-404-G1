#include <iostream>
using namespace std;

double GetPriceQualityRatio(int price, int quality) {
  double result = price / quality;
  return result;
}

int main() {
  int n;
  cin >> n;

  string phones[n];
  int price[n];
  int quality[n];

  for(int i = 0; i < n; i++) {
    cin >> phones[i] >> price[i] >> quality[i];
  }

  double minRatio = 0;
  string bestPhone = "";
  for(int i = 0; i < n; i++) {
    double ratio = GetPriceQualityRatio(price[i], quality[i]);
    if(i == 0) minRatio = ratio;
    if(ratio < minRatio) {
      minRatio = ratio;
      bestPhone = phones[i];
    }
  }
  cout << bestPhone;
  return 0;
}