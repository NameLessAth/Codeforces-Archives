#include <bits/stdc++.h>
using namespace std;
// 1030A - In Search of an Easy Problem

int main(){
    int n; cin >> n;
    int listjaw[n]; for (int i=0;i<n;i++){
        cin >> listjaw[i];
    } int ez = 0; int hard = 0; for (int i=0;i<n;i++){
        if (listjaw[i] == 0){
            ez += 1;
        } else {
            hard += 1;
        }
    } if (hard >= 1){
        cout << "HARD";
    } else {
        cout << "EASY";
    }
}