#include <bits/stdc++.h>
using namespace std;
// 50A - Domino piling

int main(){
    int mandn[2];
    for (int i=0;i<2;i++){
        cin >> mandn[i];
    } int m = mandn[0] ; int n = mandn[1];
    int firstp = (m/2) * n;  int secondp = (n/2) * m;
    if (m % 2 == 1){
        firstp += floor(n/2);
    } if (n % 2 == 1){
        secondp += floor(m/2);
    } if (firstp >= secondp){
        cout << firstp;
    } else {
        cout << secondp;
    }
}