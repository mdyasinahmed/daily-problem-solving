#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 1000000; // Adjust based on your problem constraints

vector<long long> fact(MAX + 1);
vector<long long> invFact(MAX + 1);

// Function to calculate modular exponentiation
long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to precompute factorials and inverse factorials
void precomputeFactorials() {
    fact[0] = 1;
    for (int i = 1; i <= MAX; ++i) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[MAX] = modExp(fact[MAX], MOD - 2, MOD);
    for (int i = MAX - 1; i >= 0; --i) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

// Function to calculate nCr % MOD
long long nCr(int n, int r) {
    if (r > n) return 0;
    return (fact[n] * invFact[r] % MOD * invFact[n - r] % MOD) % MOD;
}

// Function to calculate nPr % MOD
long long nPr(int n, int r) {
    if (r > n) return 0;
    return (fact[n] * invFact[n - r] % MOD) % MOD;
}

int main() {
    precomputeFactorials();
    int n = 4, r = 5;
    cout << "nCr: " << nCr(n, r) << endl;
    cout << "nPr: " << nPr(n, r) << endl;
    return 0;
}
