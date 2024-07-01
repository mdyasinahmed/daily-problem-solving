#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;

    int c1=0, c2=0;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] == target){
            ans.push_back(i);
            c1++;
            break;
        }
    }
    if(c1==0) ans.push_back(-1);

    for(int i=nums.size()-1; i>=0; i--) {
        if(nums[i] == target){
            ans.push_back(i);
            c2++;
            break;
        }
    }
    if(c2==0) ans.push_back(-1);

    return ans;
}


int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 11;

    vector<int> temp = searchRange(nums, target);

    for(int i=0; i<temp.size(); i++) {
        cout << temp[i] << " ";
    }

   return 0;
}