#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long max = a;
    if(b>max) max = b;
    if(c>max) max = c;

    long long min = a;
    if(b<min) min = b;
    if(c<min) min = c;


    cout << min << " " << max << endl;

    return 0;
}