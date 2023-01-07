#include <bits/stdc++.h>
using namespace std;
// 158B - Taxi
 
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