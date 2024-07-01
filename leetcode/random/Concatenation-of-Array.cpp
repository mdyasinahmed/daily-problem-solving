#include<bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans;
    
    while(ans.size() != nums.size()*2){
        for(int i=0; i<nums.size(); i++){
            ans.push_back(nums[i]);
        }   
    }

    return ans;
}


int main() {
    vector<int> nums = {1,2,1};

    vector<int> temp = getConcatenation(nums);

    for(int i=0; i<temp.size(); i++){
        cout << temp[i] << " ";
    }


    return 0;
}