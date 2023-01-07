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

    ll t; cin >> t; ll panjang[t]; ll x, y;
    for (int i=0;i<t;i++){
        cin >> panjang[i];
    } FOR(a, t){
        if (panjang[a] == 2){
            cout << "YES\n" << "9 5\n";
        } else if (panjang[a] == 3){
            cout << "NO\n";
        } else {
            cout << "YES\n";
            if (panjang[a]%2==0){
                FOR(b,panjang[a]/2) cout << "1 -1 ";
                cout << endl;
            } else {
                x = ((panjang[a]-1)/2)-1; y = ((panjang[a]+1)/2)-1;
                FOR(b,panjang[a]){
                    if (b % 2 == 0) cout << -x << " ";
                    else cout << y << " ";
                } cout << endl;
            }
        }
    }
    return 0;
}