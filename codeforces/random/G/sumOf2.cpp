#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int>v1;

    for(int i=1; i<=n; i++) {
        int num;
        cin >> num;
        v1.push_back(num);
    }

    int count=0;
    vector<int>v2;
    for(int i=0; i<=n; i++) {
        for(int j=i+1; j<=n; j++) {
            if(count < 3) {
                if(v1[i]+v1[j] == x) {
                    v2.push_back(i+1);
                    count++;
                    v2.push_back(j+1);
                    count++;
                }
            }
        }
    }

    if(count < 1) {
        v2.push_back(-1);
        for(int i=0; i<1; i++) {
            cout << v2[i] << " ";
        }
    } else {
        for(int i=0; i<1; i++) {
            cout << v2[i] << " ";
        }
    }

    

    return 0;
}