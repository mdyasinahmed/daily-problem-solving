#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    long long x, y, n;
    while(t--) {
        cin >> x >> y >> n;
        
        // n -= y+1;
        long long count, ans, num;
        // if(num == ((n/x)+y)) {
        //     cout << n << endl;
        // }

        // cout << n/x;

        // cout <<  7*1762+5 << endl;
        // cout << (x*(n/x) + y) -x << endl;
        num = n-y;
        count = num/x;
        ans = count*x+y;

        cout << ans << endl;
    }

    return 0;
}