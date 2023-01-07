#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
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
    ll tc; cin >> tc; string ans[tc]; ll mat[4];
    FOR(a,tc){
        FOR(b,4) cin >> mat[b];
        ll rotval = 0; ans[a] = "NO";
        while(rotval != 5){
            if ((mat[1] > mat[0]) and (mat[2] > mat[0]) and (mat[3] > mat[2]) and (mat[3] > mat[1])){
                ans[a] = "YES"; rotval = 5;
            } else {
                ll temp; temp = mat[0]; mat[0] = mat[2]; mat[2] = mat[3]; mat[3] = mat[1]; mat[1] = temp; rotval++;
            }
        }
    } FOR(a,tc) cout << ans[a] << endl;
    

    return 0;
}