#include <bits/stdc++.h>
using namespace std;
// 116A - Tram

int main(){
    int n; cin >> n; int a, b, count=0, max=0;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        count -= a; count += b;
        if (count > max){
            max = count;
        }
    } cout << max;
}