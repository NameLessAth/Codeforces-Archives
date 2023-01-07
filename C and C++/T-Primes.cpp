#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
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

string solve(ll b) {
    ll counts = 0;
    FORL(i, 2, b/2+1){
        if (b%i == 0) counts++;
        if (counts >= 2) return "NO";
    } if (counts != 1) return "NO";
    else return "YES";
}

int main(){
    ios::sync_with_stdio(0);    
    cin.tie(0);
    ll tc; cin >> tc; ll b[tc];
    FOR(a,tc) {
        cin >> b[a]; 
    } FOR(a,tc) {
        cout << solve(b[a]) << endl; 
    } return 0;
}