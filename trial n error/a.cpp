#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int solve(ll x) {
    return floor((float) x/2);
}

int main(){
    int t, a, temp; cin >> t; int sol[t];
    for (int i=0;i<t;i++) {
        sol[i] = 0; int a; cin >> a; int b[a]; ll sumofb = 0; for (int j=0;j<a;j++) {
            cin >> b[j]; sumofb += b[j];
        } for (int j=0;j<a;j++) {
            for (int k=0;k<a-(j+1);k++) {
                if (b[k] > b[k+1]) {
                    temp = b[k];
                    b[k] = b[k+1];
                    b[k+1] = temp;
                }
            }
        } int aa=0; while (sumofb % 2 != 0) {
            if (b[aa] != 0) {
                sumofb -= b[aa];
                b[aa] = solve(b[aa]); 
                sumofb += b[aa]; sol[i]++;
            } else {
                aa++;
            }
        }
    } for (int i=0;i<t;i++) {
        cout << sol[i] << endl;
    }
    return 0; 
}