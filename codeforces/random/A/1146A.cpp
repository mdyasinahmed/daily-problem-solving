#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long int len = s.length(), isA = 0;

    for(int i=0; i<len; i++) {
        if(s[i] == 'a') {
            isA++;
        }
    }

    // if(isA < len/2) {
    //     cout << len-((len/2)+1) << endl;
    // } else {
    //     cout << len;
    // }
    
    cout << min(((2*isA)-1), len) << endl;


    return 0;
}