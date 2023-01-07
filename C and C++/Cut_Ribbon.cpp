#include <bits/stdc++.h>
using namespace std;
// 189A - Cut Ribbon
 
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
    }
    int batasa = n/val[0], batasb = n/val[1], batasc = n/val[2], sementara = batasa*val[0], idx = batasa, idxf = idx, idxft, aa=0;
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