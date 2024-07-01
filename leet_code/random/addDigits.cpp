#include<bits/stdc++.h>
using namespace std;

int subtractProductAndSum(long n) {
    long sum = 0;
    
    while(sum%10>0) {
        long last = n%10;
        sum+=last;
        n/=10;
    }

    return sum;
}

int main() {
    int n;
    cin >> n;


    return 0;
}