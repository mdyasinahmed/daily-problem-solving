class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int store;
        int count = 0, n=(nums.size())/2;
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[i] == nums[j]) {
                    count++;
                    if(count > n)
                    store=nums.at(j);
                }
            }
        }
        return store;

    }
};
