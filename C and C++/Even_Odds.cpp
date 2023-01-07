#include <bits/stdc++.h>
using namespace std;
// 318A - Even Odds
 
int main(){
    long long k,n,halfk; cin >> k >> n;
    if (k%2==0) {
        halfk = k/2;
    } else {
        halfk = (k/2)+1;
    } if (n > halfk) {
        cout << (n-halfk)*2;
    } else {
        cout << (n*2)-1;
    }
}