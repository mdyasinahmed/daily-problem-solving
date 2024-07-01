#include<bits/stdc++.h>
using namespace std;

string triangleType(vector<int>& nums) {
    int a = nums.at(0), b = nums.at(1), c = nums.at(2);
    
    if(a+b<=c || a+c<=b || b+c<=a) {
        return "none";
    }
    if(a==b && b==c) {
        return "equilateral";
    } else if(a==b || b==c || a==c) {
        return "isosceles";
    } else{
        return "scalene";
    } 
}



int main() {
    
    vector<int> nums = {8,4,2};
    cout << triangleType(nums) << endl;


    return 0;
}