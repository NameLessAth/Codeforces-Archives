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

    string dubstep; getline(cin, dubstep); string subdub = ""; ll a = 0;
    FOR(i, dubstep.length()){
        if (dubstep[i] == 'W'){
            if (dubstep[i+1] == 'U'){
                if (dubstep[i+2] == 'B'){
                    if (subdub != ""){
                        if (dubstep[i-1] != 'B' or dubstep[i-2] != 'U' or dubstep[i-3] != 'W') {
                            subdub += ' ';
                        } 
                    } i+=2;
                } else {
                    subdub += "WU"; i++;
                }
            } else subdub += 'W'; 
        } else {
            if (dubstep[i] != ' ') subdub += dubstep[i];
        }
    } FOR(i, subdub.length()) {
        cout << subdub[i];
    }
    return 0;
}