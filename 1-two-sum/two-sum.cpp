class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int remaining;
        int n = nums.size();
        for(int i =0 ;i<n; i++){
            for(int j = i+1; j<n; j++){
                remaining = target - nums[i];
                if(remaining == nums[j]){
                    return {i,j};
                }
            }
        }
        return {};
    }
};