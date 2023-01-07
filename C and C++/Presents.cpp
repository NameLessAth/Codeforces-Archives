#include <bits/stdc++.h>
using namespace std;
// 136A - Presents

int main(){
    int n; cin >> n;
    int present[n]; bool tidaksetuju; tidaksetuju = false;
    for (int i=0;i<n;i++){
        cin >> present[i];
    } for (int i=0;i<n;i++){
        if (present[i] == i+1){
            tidaksetuju = true;
        }
    } if (tidaksetuju == true){
        for (int i=0;i<n;i++){
            cout << present[i] << " ";
        }
    } else { 
        cout << n << " ";
        for (int i=1;i<n;i++){
            cout << i << " ";
        }
    }
}