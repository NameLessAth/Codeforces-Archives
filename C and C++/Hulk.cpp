#include <bits/stdc++.h>
using namespace std;
// 705A - Hulk
 
int main(){
    int n; cin >> n;
    for (int i=1;i<n+1;i++) {
        if (i%2==1) {
            cout << "I hate";
        } else {
            cout << "I love";
        } if (i == n) {
            cout << " it";
        } else {
            cout << " that ";
        }
    }
}