#include <bits/stdc++.h>
using namespace std;
// 467A - George and Accommodation

int main(){
    int n; cin >> n;
    int room[2*n]; int roomav = 0;
    for (int i=0;i<2*n;i++){
        cin >> room[i];
    } for (int i=1;i<2*n;i+=2){
        if ((room[i] - room[i-1]) >= 2){
            roomav += 1;
        }
    } cout << roomav;
}