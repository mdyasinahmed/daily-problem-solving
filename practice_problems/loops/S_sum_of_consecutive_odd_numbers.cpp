#include<bits/stdc++.h>
using namespace std;

long long getSum(long long a, long long b){
    if(a>b) swap(a, b);

    long long sum=0;
    for(long long i=a+1; i<b; ++i) {
        if(i%2 != 0) {
            sum+=i;
        }
    }

    return sum;
}

int main() {
    long long t;
    cin >> t;

    while(t--) {
        long long x, y;
        cin >> x >> y;
        cout << getSum(x, y) << endl;
    }

    return 0;
}