class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sortedSquares;
        int n = nums.size();
        for(int i=0; i<n; i++){
            sortedSquares.push_back(nums[i]*nums[i]);
        }
        sort(sortedSquares.begin(), sortedSquares.end());
        return sortedSquares;
    }
};