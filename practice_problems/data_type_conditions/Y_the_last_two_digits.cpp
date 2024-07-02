#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long last_2 = 1;

    last_2 = (last_2*(a%100))%100;
    last_2 = (last_2*(b%100))%100;
    last_2 = (last_2*(c%100))%100;
    last_2 = (last_2*(d%100))%100;

    cout << last_2 << endl;

    return 0;
}