#include <bits/stdc++.h>
using namespace std;
// 118A - String Task

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