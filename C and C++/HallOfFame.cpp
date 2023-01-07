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

    ll t; cin >> t; ll angka[t]; string lampu[t]; ll answer[t];
    FOR(i,t){
        answer[i] = -1;
        cin >> angka[i];
        cin >> lampu[i];
        FOR(j,angka[i]-1){
            if (lampu[i][j] == 'R' and lampu[i][j+1] == 'L') answer[i] = 0;
        } if (answer[i] == -1){
            FOR(j,angka[i]-1){
                if (lampu[i][j] == 'L' and lampu[i][j+1] == 'R') answer[i] = j+1;
            }
        }
    } FOR(i,t) cout << answer[i] << endl;
    return 0;
}