class Solution {
public:
      int Choices(string s, int index, vector<int> &dp)
        {
            if (index == s.size())
               	//Only 1 char is left as we have reached the end so no choice
               	//other than taking it
                return 1;
            if (dp[index] != -1)
               	//If sub-problem is solved earlier
                return dp[index];
            int res = 0;
            if (s[index] != '0')
                res += Choices(s, index + 1, dp);
           	//Solving for single character
            if (index + 1 < s.size() && (s[index] == '1' || s[index] == '2' && s[index + 1] <= '6'))
               	//Solving for double character
                res += Choices(s, index + 2, dp);
            return dp[index] = res;
        }
    int numDecodings(string s)
    {
        int n = s.size();
        vector<int> dp(n + 1, -1);
        return Choices(s, 0, dp);
    }
};