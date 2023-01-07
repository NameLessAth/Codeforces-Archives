#include <bits/stdc++.h>
using namespace std;
// 677A - Vanya and Fence

int main(){
    int n, h; cin >> n >> h; int height[n], width = 0;
    for (int i = 0; i < n; i++) {
        cin >> height[i];
        if (height[i] > h) {
            width += 2;
        } else {
            width += 1;
        }
    } cout << width;
}