class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans = "";
        for(auto w:words)
        {
            ans += w[0];
        }
        
        if(ans == s)
        {
            return true;
        }
        return false;
    }
};