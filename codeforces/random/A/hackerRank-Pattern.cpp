
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;


    int i = 1;
    while(i<n*2) {
        int j = 1;
        while(j<n*2) {
            //cout << "* ";
            if((i==1 || i== (n*2-1)) || (j==1 || j== (n*2-1))) {
                cout << n << " ";
            } else {
                cout << n-1 << " ";
            }
            
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}