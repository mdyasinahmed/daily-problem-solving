#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long arr[3] = {a, b, c};

    sort(arr, arr+3);

    for(int i=0; i<3; i++) {
        cout << arr[i] << endl;
    }

    cout << endl;
    cout << a << endl << b << endl << c << endl;

    // for(int i=2; i>=0; i--) {
    //     cout << arr[i] << endl;
    // }

    return 0;
}