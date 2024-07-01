#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double PI = 3.141592653;

int main() {
    cout << fixed << setprecision(9);
    double r;
    cin >> r;

    cout << PI*r*r << endl;
}