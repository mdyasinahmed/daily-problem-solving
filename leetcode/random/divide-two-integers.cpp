#include<bits/stdc++.h>
using namespace std;


int divide(int dividend, int divisor) {
    int count=0;

    int sign = (dividend<0);

    while(dividend >= divisor){
        dividend = dividend-divisor;
        count++;
    }  

    return count*sign; 
}


int main() {
    int a, b;
    cin >> a >> b;

    cout << divide(a, b);


    return 0;
}