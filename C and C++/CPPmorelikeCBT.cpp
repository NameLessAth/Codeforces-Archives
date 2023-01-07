#include <bits/stdc++.h>
using namespace std;


/*
int main(){
    int nandk[2];
    for (int i = 0;i < 2;i++){
        cin >> nandk[i];
    } int value[nandk[0]];
    for (int i = 0; i < nandk[0]; i++){
        cin >> value[i];
    } int bb = value[nandk[1]-1]; int countval = 0;
    for (int i = 0; i < nandk[0]; i++){
        if (value[i] >= bb and value[i] > 0){
                countval++;
    } } cout << countval;
}

int main(){
    int mandn[2];
    for (int i=0;i<2;i++){
        cin >> mandn[i];
    } int m = mandn[0] ; int n = mandn[1];
    int firstp = (m/2) * n;  int secondp = (n/2) * m;
    if (m % 2 == 1){
        firstp += floor(n/2);
    } if (n % 2 == 1){
        secondp += floor(m/2);
    } if (firstp >= secondp){
        cout << firstp;
    } else {
        cout << secondp;
    }
}

int main(){
    int n; cin >> n;
    int listjaw[n]; for (int i=0;i<n;i++){
        cin >> listjaw[i];
    } int ez = 0; int hard = 0; for (int i=0;i<n;i++){
        if (listjaw[i] == 0){
            ez += 1;
        } else {
            hard += 1;
        }
    } if (hard >= 1){
        cout << "HARD";
    } else {
        cout << "EASY";
    }
}

int main(){
    int n; cin >> n;
    int room[2*n]; int roomav = 0;
    for (int i=0;i<2*n;i++){
        cin >> room[i];
    } for (int i=1;i<2*n;i+=2){
        if ((room[i] - room[i-1]) >= 2){
            roomav += 1;
        }
    } cout << roomav;
}

int main(){
    string s; getline(cin, s);
    int lenn; lenn = s.length();
    int jumlahangka; jumlahangka = lenn - floor(lenn/2);
    int listangka[jumlahangka];
    for (int i=0;i<lenn;i+=2){
        string temp; temp = s[i];
        listangka[i/2] = stoi(temp);
    } int tempo;
    for (int i=0;i<jumlahangka;i++){
        for (int j=0;j<jumlahangka-(i+1);j++){
            if (listangka[j] > listangka[j+1]){
                tempo = listangka[j];
                listangka[j] = listangka[j+1];
                listangka[j+1] = tempo;
            }
        }
    } cout << listangka[0];
    for (int i=1;i<jumlahangka;i++){
        cout << "+" << listangka[i];
    }
}

int main(){
    int n; cin >> n;
    int present[n]; int presentaksen[n];
    for (int i=0;i<n;i++){
        cin >> present[i];
    } for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (present[j] == i+1){
                presentaksen[i] = j+1;
            }
        }
    } for (int i=0;i<n;i++){
        cout << presentaksen[i] << " ";
    }
}

int main(){
    int nandtime[2]; 
    for (int i=0;i<2;i++){
        cin >> nandtime[i];
    }string queue; cin >> queue;
    for (int i=0;i<nandtime[1];i++){
        for (int j=0;j<nandtime[0]-1;j++){
            if (queue[j] == 'B'){
                if (queue[j+1] == 'G'){
                    queue[j] = 'G';
                    queue[j+1] = 'B';
                    j += 1;
                }
            }
        }
    } cout << queue;
}

int main(){
    int n; string stone; int count; count = 0;
    cin >> n; cin >> stone; 
    for (int i=1;i<n;i++){
         if(stone[i]==stone[i-1]){
            count+=1;
        }
    } cout << count;
}

int main(){
    int n; cin >> n;
    int magnet[n]; int magnetgroup = 1;
    for (int i=0;i<n;i++){
        cin >> magnet[i];
    } for (int i=1;i<n;i++){
        if (magnet[i] != magnet[i-1]){
            magnetgroup += 1;
        }
    } cout << magnetgroup;
}

int main(){
    string words; getline(cin, words); int vowelscount = 0;
    for (int i = 0; i < words.length(); i++) { 
        words[i] = tolower(words[i]);
        if (not(words[i] == 'a' or words[i] == 'i' or words[i] == 'u' or words[i] == 'e' or words[i] == 'o' or words[i] == 'y')) {
            vowelscount += 1;
            cout << "." << words[i];       
        }  
    }
}

int main(){
    int n; cin >> n; int group[n]; int count1 = 0; int count2 = 0; int count3 = 0; int mobil = 0;
    for (int i=0;i<n;i++) {
        cin >> group[i];
    } for (int i=0;i<n;i++) {
        if (group[i] == 1) {
            count1 += 1;
        } else if (group[i] == 2) {
            count2 += 1;
        } else if (group[i] == 3) {
            count3 += 1;
        } else {
            mobil += 1;
        }
    } int mobil2 = floor(count2/2); count2 -= (mobil2 * 2); mobil += mobil2; 
    if (count1 > 0 and count3 > 0) {
        if (count1 > count3) {
            mobil += count3;
            count1 -= count3;
            count3 = 0;
        } else if (count3 > count1) {
            mobil += count1;
            count3 -= count1;
            count1 = 0;
        } else {
            mobil += count3; count3 = 0; count1 = 0;
        }
    } if (count1 != 0) {
        if (count2 != 0) {
            if (count1 >= 2) {
                count1 -= 2;
                mobil += 1 + ceil((float) count1/4);
            } else {
                mobil += 1;
            }
        } else {
            mobil += ceil((float) count1/4);
        }
    } else {
        if (count3 != 0) {
            mobil += count3 + count2;
        } else {
            mobil += count2;
        }
    } cout << mobil;
} 

int main() {
    string words[2]; for (int i=0;i<2;i++) {
        cin >> words[i];
    for (int j=0;j<2;j++) {
        for (int i=0;i<words[j].length();i++) {
            words[j][i] = tolower(words[j][i]);
            }
        }
    } if (words[0] > words[1]) {
        cout << 1;
    } else if (words[1] > words[0]) { 
        cout << -1;
    } else if (words[1] == words[0]) {
        cout << 0;
    }
} 

int main(){ 
    int angka[2]; angka[0] = 99; angka[1] = 99;
    while (angka[0] + angka[1] != 0){
        cin >> angka[0] >> angka[1];
        int count = 0;
        if (angka[0] + angka[1] != 0){
            for (int i=1;i<angka[0]+1;i++){
                for (int j=1;j<angka[0]+1;j++){
                    for (int k=1;k<angka[0]+1;k++){
                        if (i+j+k == angka[1]){
                            if (i != j and i != k and j != k){
                                count++;
                            }
                        }
                    }
                }
            } cout << count/6 << endl;
        }
    }   
} 

int main(){
    int n; cin >> n; int ans[n]; 
    for (int i=0;i<n;i++){
        int jml; cin >> jml; int lok[jml]; int temp;
        for (int j=0;j<jml;j++){
            cin >> lok[j];
        } for (int k=0;k<jml;k++){
            for (int l=0;l<jml-(k+1);l++){
                if (lok[l] > lok[l+1]){
                    temp = lok[l];
                    lok[l] = lok[l+1];
                    lok[l+1] = temp;
                }
            }
        } ans[i] = lok[jml-1] - lok[0];
        ans[i] *= 2;
    } for (int m=0;m<n;m++){
        cout << ans[m] << endl;
    }
}

int main(){
    string condi; getline(cin, condi); char temp = condi[0]; int count = 1; bool danger = false;
    for (int i=1;i<condi.length();i++) {
        if (condi[i] == temp){
            count += 1;
        } else {
            count = 1; temp = condi[i];
        } if (count >= 7){
            danger = true;
        }
    } if (danger == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main(){
    int n; cin >> n; int a, b, count=0, max=0;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        count -= a; count += b;
        if (count > max){
            max = count;
        }
    } cout << max;
}

int main(){
    int n, h; cin >> n >> h; int height[n], width = 0;
    for (int i = 0; i < n; i++) {
        cin >> height[i];
        if (height[i] > h) {
            width += 2;
        } else {
            width += 1;
        }
    } cout << width;
}

// timeout 
bool numsprime(int x){
    int num = 0;
    for (int i=2;i<(x/2)+1;i++){
        if (x % i == 0){
            num += 1;
        } if (num >= 2){
            return false;
        }
    } if (num != 1) {
        return false;
    } else {
        return true;
    }
}
int main(){
    int n; cin >> n; int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    } for (int j=0;j<n;j++){
        if (numsprime(nums[j])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        } 
    }
} 
//timeout
int main(){
    int a,b,c,d,temp,min,max=0; cin >> a >> b >> c >> d;
    int batasb = a/b, batasc = floor((float)a/c), batasd = floor((float)a/d);
    if (a%b == 0){
        max = a/b;
    } if (a%c == 0){
        if (a/c > max){
            max = a/c;
        }
    } if (a%d == 0){
        if (a/d > max){
            max = a/d;
        }
    } if (max == 0 or max == 1){
        for (int i = 0; i < batasb + 1; i++) {
            for (int j = 0; j < batasc + 1; j++) {
                for (int k = 0; k < batasd + 1; k++) {
                    if (i*b+j*c+k*d==a) {
                        temp = i+j+k; 
                        if (temp > max) {
                            max = temp;
                        }   
                    }    
                }      
            }   
        }       
    } cout << max;
}

bool HQ9(char x){
    if (x=='H' or x=='Q' or x=='9') {
        return true;
    } else {
        return false;
    }
}
int main(){
    string p; getline(cin, p); bool Trumint = false;
    for (int i=0;i<p.length();i++) {
        if (HQ9(p[i])) {
            Trumint = true;
            i = p.length();
        }
    } if (Trumint) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

bool upletter(char x){
    if (x == toupper(x)) {
        return true;
    } else {
        return false;
    }
}
void yangbenar(string x, int y) {
    for (int i=0;i<y;i++) {
        if (x[i] == tolower(x[i])) {
            x[i] = toupper(x[i]);
        } else {
            x[i] = tolower(x[i]);
        }
    } cout << x;
}
int main(){
    string words; getline(cin, words); int count=0; int len = words.length();
    for (int i=0;i<words.length();i++) {
        if (upletter(words[i])) {
            count++;
        }
    } if (count == words.length()) {
        yangbenar(words, len);
    } else if (count == words.length() - 1) {
        if (upletter(words[0]) == false) {
            yangbenar(words, len);
        } else {
            cout << words;
        }
    } else {
        cout << words;
    }
} 

void hasil(char x, char y){
    if (x == y) {
        cout << 0;
    } else {
        cout << 1;
    }
}
int main(){
    string first,second; getline(cin, first); getline(cin, second);
    for (int i=0;i<first.length();i++) {
        hasil(first[i], second[i]);
    }
}

int main(){
    int n; cin >> n;
    int x,y,z; int count = 0;
    for (int i=0;i<n;i++) {
        cin >> x >> y >> z;
        if (x+y+z >= 2) {
            count++;
        }
    } cout << count;
}

int main(){
    ll n; cin >> n;
    if (n % 2 == 0) {
        cout << n/2;
    } else {
        cout << -((n+1)/2);
    }
}

int main(){
    int N,t; cin >> N >> t; int A[N];
    for (int i=0;i<N;i++) {
        cin >> A[i];
    } if (t == 1) {
        string hasil = "No";
        for (int i=0;i<N-1;i++) {
            for (int j=i+1;j<N;j++) {
                if (A[i] + A[j] == 7777) {
                    hasil = "Yes";
                }
            }
        } cout << hasil;
    } else if (t == 2) {
        string hasil = "Unique";
        for (int i=0;i<N-1;i++) {
            for (int j=i+1;j<N;j++) {
                if (A[i] == A[j]) {
                    hasil = "Contains duplicate";
                }
            }
        } cout << hasil;  
    } else if (t == 3) {
        int hasil = -1;
        for (int i=0;i<N;i++) {
            int count = 0;
            for (int j=0;j<N;j++) {
                if (A[j] == A[i]) {
                    count ++;
                    if (count > (float) N/2) {
                        hasil = A[i];
                        i=N;j=N;
                    }
                }
            }
        } cout << hasil;
    } else if (t == 4) {
        int temp;
        for (int i=0;i<N;i++) {
            for (int j=0;j<N-(i+1);j++) {
                if (A[j] > A[j+1]) {
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                }
            }
        } if (N % 2 == 0) {
            cout << A[N/2 - 1] << " " << A[N/2]; 
        } else {
            cout << A[(N+1)/2];
        }
    } else {
        int temp;
        for (int i=0;i<N;i++) {
            for (int j=0;j<N-(i+1);j++) {
                if (A[j] > A[j+1]) {
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                }
            }
        } for (int i=0;i<N;i++) {
            if (A[i]>=100 && A[i]<=999) {
                cout << A[i] << " ";
            }
        }
    }
}

int main(){
    ll k,n; cin >> n >> k;
    if (n % 2 == 0) {
        if (k > n/2) {
            ll a = 0;
            for (ll i=2;i<n+1;i+=2) {
                a++;
                if (a + n/2 == k) {
                    cout << i;
                }
            }
        } else {
            ll a = 0;
            for (ll i=1;i<n+1;i+=2) {
                a++;
                if (a == k) {
                    cout << i;
                }
            }
        }
    } else {
        if (k > (n+1)/2) {
            ll a = 0;
            for (ll i=2;i<n+1;i+=2) {
                a++;
                if (a + (n+1)/2 == k) {
                    cout << i;
                }
            }
        } else {
            ll a = 0;
            for (ll i=1;i<n+1;i+=2) {
                a++;
                if (a == k) {
                    cout << i;
                }
            }
        }
    }
}

int main(){
    ll n,k; cin >> n >> k; if (k > ceil((float) n/2)) cout << (k-ceil((float) n/2))*2 << endl; else cout << k+(k-1) << endl;
}

int main(){
    int n; cin >> n; float drinks[n], sumdrinks = 0;
    for (int i=0;i<n;i++){
        cin >> drinks[i]; sumdrinks += drinks[i];
    } cout << (float) sumdrinks/n;
}

int main(){
    int n; cin >> n;
    for (int i=1;i<n+1;i++) {
        if (i%2==1) {
            cout << "I hate";
        } else {
            cout << "I love";
        } if (i == n) {
            cout << " it";
        } else {
            cout << " that ";
        }
    }
}

int main(){
    int n, val[3], tempo;
    cin >> n; 
    for (int i=0;i<3;i++) {
        cin >> val[i];
    } for (int i=0;i<3;i++) {
        for (int j=0;j<3-(i+1);j++) {
            if (val[j] > val[j+1]) {
                tempo = val[j];
                val[j] = val[j+1];
                val[j+1] = tempo;
            }
        }
    } int batasa = n/val[0], batasb = n/val[1], batasc = n/val[2], sementara = batasa*val[0], idx = batasa, idxf = idx, idxft, aa=0;
    if (sementara != n) while (sementara != 0) {
        sementara-=val[0]; idx--;
        if ((n-sementara)>=val[1]) {
            for (int a=0;a<(n-sementara)+1;a+=val[1]){
                for (int b=0;b<(n-sementara-a)+1;b+=val[2]){
                    if (sementara+a+b==n){
                        idxft = idx + a/val[1] + b/val[2]; aa++;
                        if (aa == 1) {
                            idxf = 0;
                        } if (idxft > idxf) {
                            idxf = idxft;
                        }
                    }
                }
            }
        }
    } cout << idxf;    
}

int main(){
    int t; cin >> t; int apart[t], floor[t], answer[t];
    for (int i=0;i<t;i++){
        cin >> apart[i] >> floor[i];
        if (apart[i]-2>0){
            answer[i] = ceil((float) (apart[i]-2)/floor[i]) + 1;
        } else {
            answer[i] = 1;
        }
    } for (int i=0;i<t;i++){
        cout << answer[i] << endl;
    }
}

int main(){
    long long k,n,halfk; cin >> k >> n;
    if (k%2==0) {
        halfk = k/2;
    } else {
        halfk = (k/2)+1;
    } if (n > halfk) {
        cout << (n-halfk)*2;
    } else {
        cout << (n*2)-1;
    }
}

int main(){
    int a[4], ans=0, temp; cin >> a[0] >> a[1] >> a[2] >> a[3];
    for (int i=0;i<4;i++){
        for (int j=0;j<4-(i+1);j++){
            if (a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    } for (int i=0;i<3;i++){
        if (a[i] == a[i+1]){
            ans++;
        }
    } cout << ans;
}

string solve(bool x){
    if (x == true){
        return "YES";
    } else {
        return "NO";
    }
}
int main(){
    int t; cin >> t; bool ans[t];
    for (int a=0;a<t;a++){
        int x[3], y[3], tempx, tempy; ans[a] = true; for (int i=0;i<3;i++){
            cin >> x[i] >> y[i];
        } for (int i=0;i<3;i++){
            if (x[0] == x[1] or x[0] == x[2]){
                if (y[1] == y[2]){
                    ans[a] = false; i=3;
                }
            } if (y[0] == y[1] or y[0] == y[2]){
                if (x[1] == x[2]){
                    ans[a] = false; i=3;
                }
            }
        tempx = x[0]; tempy = y[0];
        x[0] = x[1]; y[0] = y[1];
        x[1] = x[2]; y[1] = y[2];
        x[2] = tempx; y[2] = tempy;
        } 
    } for (int i=0;i<t;i++){
        cout << solve(ans[i]) << endl;
    }
}

int main(){
    int t; cin >> t; long long ans[t], temp;
    for (int i=0;i<t;i++){
        long long n; cin >> n;
        long long a, tower[n-1]; cin >> a;
        for (int j=0;j<n-1;j++){
            cin >> tower[j];
        } long long aa = 0;
        for (long long b=0;b<n-1;b++){
            for (long long c=0;c<n-1-(b+1);c++){
                if (tower[c] > tower[c+1]){
                    temp = tower[c+1];
                    tower[c+1] = tower[c];
                    tower[c] = temp;
                }
            }
        }
        while (aa != n-1) {
            if (tower[aa] > a){
                a++; tower[aa]--;
            }  else {
                aa++;
            }
        } ans[i] = a;
    } for (int i=0;i<t;i++){
        cout << ans[i] << endl;
    }
*/

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

    string t; cin >> t; ll a = 0;
    for (int i=t.length();i>=0;i--){
        if (a != t.length()){
            if ((t.length()-a) % 3== 0) cout << ",";
        } cout << t[a];
        a++;
    }

    return 0;
}