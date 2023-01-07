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
 
void solve() {
    
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll tc; cin >> tc; ll k[tc], n[tc], ans[tc];
    FOR(a,tc){
        ll t; cin >> t; ll angka[t], sortval = 0; float plusminus[t-1];
        FOR(b,t){
            cin >> angka[b];
            if (b >= 1){
                if (angka[b] > angka[b-1]){
                    plusminus[b-1] = (float)-(angka[b]+angka[b-1])/2; sortval++;
                } else {
                    plusminus[b-1] = (float)(angka[b-1]+angka[b])/2;
                }
            }
        } ll n = sizeof(plusminus) / sizeof(plusminus[0]);
        sort(plusminus, plusminus + n);
        if (sortval == t-1) ans[a] = 0;
        else{
            if (plusminus[0] >= 0){
                ans[a] = ceil(plusminus[t-2]);
            } else{
                if (plusminus[t-2]+ceil(plusminus[0])>0) ans[a] = -1;
                else if (plusminus[t-2]+ceil(plusminus[0])<0) ans[a] = floor(-plusminus[0]);
                else{
                    if (plusminus[0]-(ll)plusminus[0] == 0) ans[a] = -plusminus[0];
                    else ans[a] = -1;
                }
            }
        }
 
    } FOR(a,tc) cout << ans[a] << endl;
 
    return 0;
}