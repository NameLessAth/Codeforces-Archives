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

    int t; cin >> t; string ans[t];
    for (int a=0;a<t;a++){
        int len; cin >> len; string input; ans[a] = "";
        cin >> input; char sementara = input[0];
        for (int i=1;i<len;i++){
            if ((sementara == '0' and input[i] == '0') or sementara == '1' and input[i] == '0'){
                ans[a] += '+';
            } else if (sementara == '1' and input[i] == '1') {
                ans[a] += '-';
                sementara = '0';
            } else {
                ans[a] += '+'; sementara = '1'; 
            }
        }
    } for (int a=0;a<t;a++){
        cout << ans[a] << endl;
    }

    return 0;
}