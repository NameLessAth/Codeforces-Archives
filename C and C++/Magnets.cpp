#include <bits/stdc++.h>
using namespace std;
// 344A - Magnets
 
int main(){
    int n; cin >> n;
    int magnet[n]; int magnetgroup = 1;
    for (int i=0;i<n;i++){
        cin >> magnet[i];
    } for (int i=1;i<n;i++){
        if (magnet[i] != magnet[i-1]){
            magnetgroup += 1;
        }
    } cout << magnetgroup;
}