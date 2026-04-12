class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxProd = nums[0];
        int minProd = nums[0];
        int ans = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            int num = nums[i];
            
            int temp = maxProd;
            
            maxProd = max({num, num * maxProd, num * minProd});
            minProd = min({num, num * temp, num * minProd});
            
            ans = max(ans, maxProd);
        }
        
        return ans;
    }
};