#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int idx = 0; idx < t; idx++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if((x1<y1 && x2>y2) || (x1>y1 && x2<y2)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}