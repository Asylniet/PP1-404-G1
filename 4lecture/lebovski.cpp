#include <iostream>
using namespace std;
int main(){
    int a, n, b, k;
    cin >> a >> n >> b >> k;
    int a1 = 0, a2 = 0;
    for(int i = 0; i <= n; i++){
        if(a % 2 == 0) a1 = 0;
        if(a % 2 == 1) a1 = 1;
        a /= 2;
    }
    for(int i = 0; i <= k; i++){
        if(b % 2 == 0) a2 = 0;
        if(b % 2 == 1) a2 = 1;
        b /= 2;
    }
    if(a1 == a2) cout << "Money was found";
    else cout << "Where is the money Lebowski?";
}