#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int k=0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
           if(i%2 == 0) {
            if(k%2==0 && j==m) {
                    cout << j;
                    k++;
                }
                if(k%2!=0 && j==1) {
                    cout << j;
                    k++;
                }
                
                
            } else {
                cout << "#";
            }
        }
        cout << endl;
    }

    return 0;
}
