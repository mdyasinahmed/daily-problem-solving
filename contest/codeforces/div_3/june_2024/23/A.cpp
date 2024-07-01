#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int arr[3];

        for (int i = 0; i < 3; ++i) {
            cin >> arr[i];
        }

        int m = *max_element(arr, arr + 3);
        int n = *min_element(arr, arr + 3);

        cout << m-n << endl;
    }

    return 0;
}