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

    ll t; cin >> t; ll seq[t], a = 0, max = 0; bool loop;
    FOR(i,t) cin >> seq[i];
    FORL(i, 1, t-1){
        if (seq[i] >= seq[i-1]){
            if (loop == true){
                a++;
                if (a > max) max = a;
            } else {
                a++; loop = true;
                if (a > max) max = a;
            }
        } else {
            a = 0; loop = false;
        }
    }
    cout << max + 1;
    return 0;
}