#include <bits/stdc++.h>
using namespace std;
// 133A - HQ9+

bool HQ9(char x){
    if (x=='H' or x=='Q' or x=='9') {
        return true;
    } else {
        return false;
    }
}
int main(){
    string p; getline(cin, p); bool Trumint = false;
    for (int i=0;i<p.length();i++) {
        if (HQ9(p[i])) {
            Trumint = true;
            i = p.length();
        }
    } if (Trumint) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}