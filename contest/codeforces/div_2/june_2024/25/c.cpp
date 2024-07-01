#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, l, r;
    cin >> n >> l >> r;

    vector<long long> a(n);

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long ans = 0;
    long long sum = 0;

    for(int i=0; i<n; ++i) {
        if (a[i] > r) {
            sum = 0;
            continue;
        }

        if(sum >= r) {
            sum = 0;
        }

        if(a[i] >= l && a[i] <= r) {
            sum = 0;
            ans++;
            continue;
        }

        sum += a[i];

        if(sum <= r && sum >= l) {
            sum = 0;
            ans++;
        }
    }

    if(sum >= l && sum <= r) {
        ans++;
    }

    cout << ans << endl;
}



int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}