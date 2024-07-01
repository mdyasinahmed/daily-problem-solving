#include<bits/stdc++.h>
using namespace std;


int gcd(int x, int y) {
    if(x==y) return x;

    if(x>y) return gcd(x-y, y);

    else return gcd(x, y-x);
}

int findGCD(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int a = nums[0];
    int b = nums[nums.size()-1];

    return gcd(a, b);
}

int main() {
    vector<int> nums = {2, 5, 6, 9, 10};

    cout << findGCD(nums);


    return 0;
}