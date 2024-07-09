#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;

    vector<long long> v;

    long long min;
    for(long long i=0; i<n; ++i){
        long long value; cin >> value;
        v.push_back(value);
        min = v[0];
        if(min > v[i]) {
            min = v[i];
        }
    }
    
    long long position;
    for(long long i=0; i<v.size(); ++i){
        if(min == v[i]) {
            position = i+1;
            break;
        }
    }

    cout << min << " " << position << endl;


    return 0;
}