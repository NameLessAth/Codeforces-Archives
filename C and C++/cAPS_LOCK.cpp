#include <bits/stdc++.h>
using namespace std;
// 131A - cAPS lOCK

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