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

    int tc; cin >> tc; string ans[tc];
    FOR(a, tc){
        ll n, m, k; cin >> n >> m >> k; ans[a] = "YES";
        ll color[m], sementara[n], nsaatini = 1; FOR(b, m){
            cin >> color[b];
        } FOR(b, n) sementara[b] = 0; 
        while (nsaatini != m+1){
            FOR(c, n){
                if (sementara[c] == 0){
                    ll awal = c;
                    ll colorcounts = 0;
                    while (colorcounts != color[nsaatini-1]){
                        if (c<n){
                            sementara[c] = nsaatini;
                            c += k; colorcounts++;
                        } else{
                            c = awal + 1;
                        }
                    } c = n; 
                }
            } nsaatini++;
        } FOR(c, n-1){
            if (sementara[c] == sementara[c+1]){
                ans[a] = "NO"; c = n-1;
            }
        }
    } FOR(a,tc) cout << ans[a] << endl;
    return 0;
}