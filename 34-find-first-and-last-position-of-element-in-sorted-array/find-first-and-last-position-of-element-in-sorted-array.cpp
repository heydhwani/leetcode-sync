class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int i =0;
        while(i<n && nums[i] != target){
            i++;
        } 
        if(i==n){
            return{-1,-1};
        }
        int j = i+1;
        while(j<n && nums[j] == target){
            j++;
        }
        

        return {i,j-1};

        
    }
};