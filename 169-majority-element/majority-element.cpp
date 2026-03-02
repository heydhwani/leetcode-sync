class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i : nums){
            freq[i]++;
        }
        int max = 0;
        int result;

        for(auto it: freq){
            if(it.second>max){
                max = it.second;
                result = it.first;
            }
        }
        return result;

        
    }
    
    
};