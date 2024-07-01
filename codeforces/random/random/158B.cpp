#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, sum=0;
    cin >> n;

    // vector<long long> v;

    while(n--) {
        long long a; cin >> a;
        // v.push_back(a);
        // sum+=v[i];
        sum+=a;
    }

    long long ans=0;
    while(sum>0) {
        sum-=3;
        ans++;
    }

    cout << ans << endl;

    return 0;
}