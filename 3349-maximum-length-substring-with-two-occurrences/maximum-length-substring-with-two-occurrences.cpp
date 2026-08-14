class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left = 0;
        int right = 0;
        int ans = 0;

        unordered_map<char,int> freq;

        for(char x : s) {
            freq[x]++;
            right++;

            while(freq[x] > 2) {
                freq[s[left]]--;
                left++;
            }

            ans = max(ans, right - left);
        }

        return ans;
    }
};