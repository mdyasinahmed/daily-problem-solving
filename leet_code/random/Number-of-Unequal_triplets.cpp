#include<bits/stdc++.h>
using namespace std;


int unequalTriplets(vector<int>& nums) {
    int ans = 0;
    for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            for(int k=j+1; k<nums.size(); k++) {
                if(nums[i] != nums[j] && nums[i] != nums[k] && nums[j] != nums[k]){
                    ans++;
                }
            }
        }
    }

    return ans;
}


int main() {
    vector<int> nums = {4,4,2,4,3};

    cout << unequalTriplets(nums) << endl;


    return 0;
}