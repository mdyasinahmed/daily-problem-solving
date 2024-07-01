#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    double get = (double)a/b;

    cout << "floor " << a << " / " << b << " = " << floor(get) << endl; 
    cout << "ceil " << a << " / " << b << " = " << ceil(get) << endl; 
    cout << "round " << a << " / " << b << " = " << round(get) << endl; 

    return 0;
}

