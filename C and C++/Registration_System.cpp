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

void solve() {
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin >> t; string nama[t]; ll count[t]; string ans[t]; ll b;
    for (int i=0; i<t; i++){
        cin >> nama[i]; bool a = true; count[i] = 0;
        for (int j=0;j<i;j++){
            if (nama[i] == nama[j]){
                a = false; count[j]++; b = j;
            }
        } if (a == true){
            ans[i] = "OK";
        } else {
            ans[i] = nama[i] + (char) count[b];
        }
    } coutarr(ans, t)
    return 0;
}