#include <bits/stdc++.h>
using namespace std;
// 1767A - Cut the Triangle
 
string solve(bool x){
    if (x == true){
        return "YES";
    } else {
        return "NO";
    }
}
 
int main(){
    int t; cin >> t; bool ans[t];
    for (int a=0;a<t;a++){
        int x[3], y[3], tempx, tempy; ans[a] = true; for (int i=0;i<3;i++){
            cin >> x[i] >> y[i];
        } for (int i=0;i<3;i++){
            if (x[0] == x[1] or x[0] == x[2]){
                if (y[1] == y[2]){
                    ans[a] = false; i=3;
                }
            } if (y[0] == y[1] or y[0] == y[2]){
                if (x[1] == x[2]){
                    ans[a] = false; i=3;
                }
            }
        tempx = x[0]; tempy = y[0];
        x[0] = x[1]; y[0] = y[1];
        x[1] = x[2]; y[1] = y[2];
        x[2] = tempx; y[2] = tempy;
        }
    } for (int i=0;i<t;i++){
        cout << solve(ans[i]) << endl;
    }
}