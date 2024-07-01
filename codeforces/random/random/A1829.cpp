#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    string s;
    string s1 = "codeforces";
    
    while(t--) {
        cin >> s;
        int n= s1.length();
        int count=0;

        for(int i=0; i<n; i++) {
            if(s[i]!=s1[i]) {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}