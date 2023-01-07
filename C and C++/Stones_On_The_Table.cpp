#include <bits/stdc++.h>
using namespace std;
// 266A - Stones on the Table 

int main(){
    int n; string stone; int count; count = 0;
    cin >> n; cin >> stone; 
    for (int i=1;i<n;i++){
        if(stone[i]==stone[i-1]){
            count+=1;
        }
    } cout << count;
}
