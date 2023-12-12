#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <map>
#include <c++/v1/iomanip>
using namespace std;

bool compareGPAS(pair<string, double> &a, pair<string, double> &b) {
  return a.second < b.second;
}

int main() {
  map<string, double> gradesMap;
  gradesMap["A+"] = 4.00;
  gradesMap["A"] = 3.75;
  gradesMap["B+"] = 3.50;
  gradesMap["B"] = 3.00;
  gradesMap["C+"] = 2.50;
  gradesMap["C"] = 2.00;
  gradesMap["D+"] = 1.50;
  gradesMap["D"] = 1.00;
  gradesMap["F"] = 0.00;

  vector<pair<string, double> > v;

  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int numberOfSubjects;
    string name, surname;
    cin >> name >> surname >> numberOfSubjects;
    double topSum = 0, bottomSum = 0;
    for(int j = 0; j < numberOfSubjects; j++) {
      string grade;
      int credit;
      cin >> grade >> credit;
      topSum += gradesMap[grade] * credit;
      bottomSum += credit;
    }
    double gpa = topSum / bottomSum;
    v.emplace_back(name + " " + surname, gpa);
  }

  sort(v.begin(), v.end(), compareGPAS);

  for(int i = 0; i < v.size(); i++) {
    cout << v[i].first << " " << fixed << setprecision(3) << v[i].second << endl;
  }
  
  return 0;
}