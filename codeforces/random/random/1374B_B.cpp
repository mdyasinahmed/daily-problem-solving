#include <iostream>
#include <vector>
using namespace std;

int min_moves_to_one(long long n) {
    int moves = 0;
    while (n != 1) {
        if (n % 6 == 0) {
            n /= 6;
        } else if (n % 3 == 0) {
            n *= 2;
        } else {
            return -1;
        }
        moves++;
    }
    return moves;
}

int main() {
    int t;
    cin >> t;
    vector<long long> test_cases(t);
    for (int i = 0; i < t; ++i) {
        cin >> test_cases[i];
    }
    
    for (int i = 0; i < t; ++i) {
        cout << min_moves_to_one(test_cases[i]) << endl;
    }
    
    return 0;
}
