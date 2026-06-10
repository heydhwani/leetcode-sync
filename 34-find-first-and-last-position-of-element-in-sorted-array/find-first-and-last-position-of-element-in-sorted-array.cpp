class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int first = -1;
        int last = -1;

        while(low<= high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                first = mid;
                high = mid-1;
            } else if(nums[mid] < target){
                low = mid+1;
            } else {
                high = mid-1;
            }
        }

        int start = 0;
        int end = n-1;

        while(start<= end){
            int mid = (start+end)/2;
            if(nums[mid] == target){
                last = mid;
                start = mid+1;
            } else if(nums[mid] < target){
                start = mid +1;
            } else {
                end = mid -1;
            }
        }
        return{first,last};
    }
};