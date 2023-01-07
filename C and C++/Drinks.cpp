#include <bits/stdc++.h>
using namespace std;
// 200B - Drinks
 
int main(){
    int n; cin >> n; float drinks[n], sumdrinks = 0;
    for (int i=0;i<n;i++){
        cin >> drinks[i]; sumdrinks += drinks[i];
    } cout << (float) sumdrinks/n;
}