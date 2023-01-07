#include <bits/stdc++.h>
using namespace std;
// 61A - Ultra-Fast Mathematician

void hasil(char x, char y){
    if (x == y) {
        cout << 0;
    } else {
        cout << 1;
    }
}
int main(){
    string first,second; getline(cin, first); getline(cin, second);
    for (int i=0;i<first.length();i++) {
        hasil(first[i], second[i]);
    }
}