#include<bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    string s = "hello";

    int j=0, count=0;

    for(int i=0; i<n.length();i++){
        if(n[i] == s[j]){
            j++;
            count++;
        }
    }

    if(count == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}