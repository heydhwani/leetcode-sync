class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> res;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            } else {
                pos.push_back(nums[i]);
            }
        }
        int m = 0;
        int k = 0;
        while(m<pos.size() && k<neg.size()){
            res.push_back(pos[m]);
            m++;
            res.push_back(neg[k]);
            k++;
        }
        return res;
    }
};