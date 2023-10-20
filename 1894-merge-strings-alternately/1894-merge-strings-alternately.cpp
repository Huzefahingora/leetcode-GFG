class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int maxLen = max(word1.length(),word2.length());
        for(int i =0; i < maxLen; ++i)
        {
            if(i < word1.length() && i < word2.length())
            {
                ans += word1[i];
                ans += word2[i];
            }
            else if (i < word1.length())
            {
                ans +=word1[i];
            }
            else if(i < word2.length())
            {
                ans +=word2[i];
            }
        }
        return ans;
    }
};