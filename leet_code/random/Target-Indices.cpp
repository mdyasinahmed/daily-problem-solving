#include<bits/stdc++.h>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target) {
    vector<int> ans;

    sort(nums.begin(), nums.end());

    for(int i=0; i<nums.size(); i++){
        if(nums[i] == target){
            ans.push_back(i);
        }
    }

    sort(ans.begin(), ans.end());

    return ans;   
}


int main() {
    vector<int> nums = {1,2,5,2,3};
    int target = 7;

    vector<int> temp = targetIndices(nums, target);

    for(int i=0; i<temp.size(); i++){
        cout << temp[i] << " ";
    }

    return 0;
}