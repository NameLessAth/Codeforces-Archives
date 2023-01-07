#include <bits/stdc++.h>
using namespace std;
// 339A - Helpful Maths

int main(){
    string s; getline(cin, s);
    int lenn; lenn = s.length();
    int jumlahangka; jumlahangka = lenn - floor(lenn/2);
    int listangka[jumlahangka]; stringstream converto;
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