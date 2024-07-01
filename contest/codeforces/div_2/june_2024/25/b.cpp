#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long x, y, k;
    cin >> x >> y >> k;

    long long ans;
    bool done = false;

    while(x!=1) {
        long long remaining = ((x/y)+1) * y-x;

        if(k < remaining) {
            ans = k + x;
            done = true;
            break;
        }

        k -= remaining;
        x += remaining;

        while (x % y == 0) {
            x /= y;
        }
    }

    y--;

    if (!done) {
        ans = 1 + k % y;
    }

    cout << ans << endl;
}





int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
