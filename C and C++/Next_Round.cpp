#include <bits/stdc++.h>
using namespace std;
// 158A - Next Round


int bb;
int countval;
 
int main(){
    int nandk[2];
    for (int i = 0;i < 2;i++){
        cin >> nandk[i];
    } int a = nandk[1]; 
    int b = nandk[0];
    int value[b];
    for (int i = 0; i < b; i++){
        cin >> value[i];
    } bb = value[a-1];
    countval = 0;
    for (int i = 0; i < b; i++){
        if (value[i] >= bb){
            if (value[i] > 0){
                countval++;
            }
        }
    } cout << countval;
}