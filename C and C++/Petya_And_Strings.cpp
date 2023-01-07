#include <bits/stdc++.h>
using namespace std;
// 112A - Petya and Strings
 
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