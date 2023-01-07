#include <bits/stdc++.h>
using namespace std;
// 1426A - Floor Number
 
int main(){
    int t; cin >> t; int apart[t], floor[t], answer[t];
    for (int i=0;i<t;i++){
        cin >> apart[i] >> floor[i];
        if (apart[i]-2>0){
            answer[i] = ceil((float) (apart[i]-2)/floor[i]) + 1;
        } else {
            answer[i] = 1;
        }
    } for (int i=0;i<t;i++){
        cout << answer[i] << endl;
    }
}