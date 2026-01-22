class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        vector<string> words;
        int i = 0;

        while (i < n) {
            // skip spaces
            while (i < n && s[i] == ' ')
                i++;

            if (i >= n) break;

            int start = i;

            // read word
            while (i < n && s[i] != ' ')
                i++;

            int end = i - 1;

            words.push_back(s.substr(start, end - start + 1));
        }

        string ans = "";
        for (int i = words.size() - 1; i >= 0; i--) {
            ans += words[i];
            if (i != 0)
                ans += " ";
        }

        return ans;
    }
};
