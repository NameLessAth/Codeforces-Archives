#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string orang[n]; int total; int max = 0; int temp; string beliau = "cok";
    for (int i=0;i<n;i++){
        cin >> orang[i] >> total;
        int listangka[total]; 
        for (int j=0;j<total;j++){
            cin >> listangka[j];
        } for (int k=0;k<total;k++){
            for (int l=0;l<total-k;l++){
                temp = 0;
                for (int m=k;m<total-l;m++){
                    temp += listangka[m];
                } if (temp > max) {
                    max = temp; beliau = orang[i];
                }
            }
        } 
    } cout << beliau;
}