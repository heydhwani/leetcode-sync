class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            // jab tak current string prefix se start nahi hoti
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back();   // last char hatao
                if (prefix.empty())
                    return "";
            }
        }
        return prefix;
    }
};
