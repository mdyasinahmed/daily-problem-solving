#include<bits/stdc++.h>
using namespace std;

void soln(){
    string s;
    cin >> s;

    int l = s.size();

    if(l & 1) {
        cout << "NO" << endl;
        return;
    } else {
        for(int i=0; i< l/2; i++) {
            if(s[i] != s[(l/2)+i]) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }

}

int main() {
    int n;
    cin >> n;

    while(n--) {
        soln();
    }

    return 0;
}