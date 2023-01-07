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

    int tc; cin >> tc; int cube[tc], temp;
    FOR(a, tc){
        cin >> cube[a];
    } FOR(i, tc){
        FOR(j, tc-(i+1)){
            if (cube[j] > cube[j+1]){
                temp = cube[j];
                cube[j] = cube[j+1];
                cube[j+1] = temp;
            }
        }
    } FOR(a, tc){
        cout << cube[a] << " ";
    }
    return 0;
}