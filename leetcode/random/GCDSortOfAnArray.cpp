#include<bits/stdc++.h>
using namespace std;

int findGCD(int a, int b){
    if(a==b) return a; 

    if(a>b) return findGCD(a-b, b);
    
    else return findGCD(b, b-a);
}

bool gcdSort(vector<int>& nums) {
    for(int i=0; i<nums.size(); ++i) {
        for(int j=i+1; j<nums.size(); ++j) {
            if(findGCD(nums[i], nums[j]) > 1) {
                swap(nums[i], nums[j]);
            }
        }
    }

    // for(int i=0; i<nums.size(); ++i) {
    //     cout << nums[i] << " " << endl;
    // }

    int count = 0;
    for(int i=0; i<nums.size(); ++i) {
        if(nums[i] <nums[i+1]) {
            count++;
        }
    }

    if(count == nums.size()-1) {
        return true;
    } else {
        return false;
    }

}



int main() {
    vector<int> nums = {10,5,9,3,15};

    cout << gcdSort(nums);

    return 0;
}