#include <bits/stdc++.h>
using namespace std;
// 231A - Team  
 
int main(){
    int n; cin >> n;
    int x,y,z; int count = 0;
    for (int i=0;i<n;i++) {
        cin >> x >> y >> z;
        if (x+y+z >= 2) {
            count++;
        }
    } cout << count;
}