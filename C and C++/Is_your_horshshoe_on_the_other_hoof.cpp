#include <bits/stdc++.h>
using namespace std;
// 228A - Is your horseshoe on the other hoof?
 
int main(){
    int a[4], ans=0, temp; cin >> a[0] >> a[1] >> a[2] >> a[3];
    for (int i=0;i<4;i++){
        for (int j=0;j<4-(i+1);j++){
            if (a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    } for (int i=0;i<3;i++){
        if (a[i] == a[i+1]){
            ans++;
        }
    } cout << ans;
}