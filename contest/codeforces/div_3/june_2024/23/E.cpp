#include <bits/stdc++.h>
using namespace std;

long long solve(vector<int>& arr, int k) {
    int n = arr.size();
    long long r = 0;

    for (int i = 0; i < n / 2; ++i) {
        int x = arr[i];
        int y = arr[n - i - 1];

        if (x != y) {
            int d = abs(x - y);
            if (d % k != 0) {
                return -1;
            }
            r += d / k;
        }
    }
    return r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << solve(arr, k) << endl;
    }

    return 0;
}
