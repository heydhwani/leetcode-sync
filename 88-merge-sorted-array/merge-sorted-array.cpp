class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int left = m - 1;
        int right = 0;

        // nums1 ke bade elements ko nums2 ke chhote elements se swap
        while (left >= 0 && right < n) {

            if (nums1[left] > nums2[right]) {
                swap(nums1[left], nums2[right]);
                left--;
                right++;
            }
            else {
                break;
            }
        }

        // Dono arrays ko sort karo
        sort(nums1.begin(), nums1.begin() + m);
        sort(nums2.begin(), nums2.end());

        // nums2 ko nums1 ke end mein copy karo
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};