#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define cinarr(x, n) for (int i = 0; i < n; i++) cin >> x[i];
#define coutarr(x, n) for (int i = 0; i < n; i++) cout << x[i] << endl;
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin >> t; ll tc; string ans[t], ansangka[t]; ll temp;
    FOR(a, t){
        cin >> tc; ans[a] = "YES"; ll angka[tc];
        cinarr(angka, tc)
        for (long long b=0;b<tc-1;b++){
            for (long long c=0;c<tc-(b+1);c++){
                if (angka[c] < angka[c+1]){
                    temp = angka[c+1];
                    angka[c+1] = angka[c];
                    angka[c] = temp;
                }
            }
        } if (tc == 1){
            if (angka[0] == 0){
                ans[a] = "NO";
            }
        } ll sum = 0;
        FOR(b, tc){
            if (sum == angka[b]){
                if (b < tc - 1){
                    for(int d=b;d<tc;d++){
                        if (angka[d] != angka[b]){
                            temp = angka[b]; angka[b] = angka[d]; angka[d] = temp;
                        }
                    }
                } else if (b == tc-1){
                    temp = angka[b]; angka[b] = angka[b-1]; angka[b-1] = temp;
                }
            } sum += angka[b];
        } sum = 0; FOR(b, tc){
            if (sum == angka[b]) ans[a] = "NO";
            else sum += angka[b];
        } if (ans[a] == "YES"){
            ansangka[a] = "";
            FOR(b, tc){
                ansangka[a] += to_string(angka[b]); ansangka[a] += " ";
            }
        }
    } FOR(a, t){
        cout << ans[a] << endl;
        if (ans[a] == "YES"){
            cout << ansangka[a] << endl;
        }
    }

    return 0;
}