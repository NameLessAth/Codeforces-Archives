#include <bits/stdc++.h>
using namespace std;
// 96A - Football

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