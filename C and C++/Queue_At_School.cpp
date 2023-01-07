#include <bits/stdc++.h>
using namespace std;
// 266B - Queue at the School

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
