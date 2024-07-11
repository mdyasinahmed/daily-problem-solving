#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
#define forRng(i, n) for(ll i = 0; i < n; ++i)


int main() {
    ll n;
    cin >> n;

    vector<ll> v;

    forRng(i, n) {
        ll x; cin >> x;
        v.push_back(x);
    }

    reverse(v.begin(), v.end());

    forRng(i, n) {
        cout << v[i] << " ";
    } cout << endl;

    return 0;
}