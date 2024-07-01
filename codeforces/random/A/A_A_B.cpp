#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    

    while(t--) {
        char s[2];

        for(int i=0; i<3; i++) {
            cin >> s[i];
        }

        for(int i=0; i<3; i++) {
            int result = +isDigit(s[i+2]);
            cout << result;
        }
    }

    


    return 0;
}