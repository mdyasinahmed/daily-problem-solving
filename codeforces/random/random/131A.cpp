#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool get = true;
    char ch;


    // for(int i=0; i<s.length(); ++i) {
    //     if(islower(s[0])){
    //         s[0] = toupper(s[0]);
    //     }
    //     if(isupper(s[i])){
    //         s[i] = tolower(s[i]);
    //     }
    // }

    
    for(int i=1; i<s.length(); ++i) {
        if(islower(s[i])){
            get = false;
        }
    }

    if(get) {
        for(int j=0; j<s.length(); j++) {
            if(islower(s[j])) {
                ch = toupper(s[j]);
            } else {
                ch = tolower(s[j]);
            }
            cout << ch;
        }
    } else {
        cout << s << endl;
    }
    

    return 0;
}